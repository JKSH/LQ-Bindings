/*\
 * Copyright (c) 2021 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#include "lqmain.h"
#include "lqapplication.h"
#include <thread>
#include <QThread>
#include <QDebug>

// This mutex prevents simultaneous instances of engine management functions
// (startWidgetEngine()/stopWidgetEngine())
static std::mutex mutex_engineApi;
static std::atomic_bool isThreadAllocated{false};


// This flag is write-protected by mutex_engineApi and Synchronizer::mutex_threadSync,
// but it can be read globally without protection. When true, LabVIEW access is enabled.
std::atomic_bool isRunning{false};

// TODO: Replace std::lock_guard with std::scoped_lock (C++17)?
class Synchronizer
{
	enum class ThreadState
	{
		Idle,
		Starting,
		Running,
		Stopping
	};

	ThreadState threadState = ThreadState::Idle;
	std::condition_variable condition_threadSync;
	std::mutex mutex_threadSync;
	std::unique_lock<std::mutex> threadLock{mutex_threadSync, std::defer_lock};

	// The Qt thread needs threadLock to act on condition_threadSync. It must be:
	//   * locked in fromThread_waitForStart()
	//   * Remain locked until fromThread_notifyLVAccessEnabled() is called
	//   * unlocked in fromThread_notifyLVAccessEnabled()

public:
	void fromApi_notifyStart()
	{
		{
			std::lock_guard<std::mutex> lock(mutex_threadSync);
			threadState = ThreadState::Starting;
		}
		condition_threadSync.notify_one();
	}

	void fromApi_waitForLVAccessEnabled()
	{
		std::unique_lock<std::mutex> lock(mutex_threadSync);
		condition_threadSync.wait( lock, [this]{return threadState == ThreadState::Running;} );
	}

	void fromThread_waitForStart()
	{
		threadLock.lock();
		condition_threadSync.wait( threadLock, [this]{return threadState == ThreadState::Starting;} );
	}

	void fromThread_notifyLVAccessEnabled()
	{
		threadState = ThreadState::Running;
		isRunning = true;
		threadLock.unlock();
		condition_threadSync.notify_one();
	}

	void fromAnywhere_disableLVAccess()
	{
		std::lock_guard<std::mutex> lock(mutex_threadSync);
		isRunning = false;
		threadState = ThreadState::Stopping;
	}

	void fromApi_cleanup()
	{
		std::lock_guard<std::mutex> lock(mutex_threadSync);
		threadState = ThreadState::Idle;
	}
};

static Synchronizer sync;
static QByteArray commandLineArgs;

static void
run(QString pluginDir)
{
	QByteArray argv0("LQ");
	QCoreApplication::addLibraryPath(pluginDir);
	do
	{
		sync.fromThread_waitForStart();

		qDebug() << "Initializing Qt engine. Command line arguments:";
		qDebug() << "\t" << commandLineArgs;

		// TODO: Handle escaped spaces
		QByteArrayList tokens;
		if (!commandLineArgs.isEmpty())
			tokens = commandLineArgs.split(' ');

		QVector<char*> argv{argv0.data()};
		for (int i = 0; i < tokens.count(); ++i)
			argv << tokens[i].data();
		argv << nullptr;

		int argc = argv.count() - 1;

		LQApplication app(argc, argv.data());

		// NOTE: QCoreApplication consumes the supported args.
		//       Whatever is left can't be used.
		if (argc > 1)
		{
			qWarning() << "Unsupported arguments:";
			for (int i = 1; i < argc; ++i)
				qWarning() << '\t' << argv[i];
		}

		// Only quit when explicitly commanded from LabVIEW
		app.setQuitOnLastWindowClosed(false);

		sync.fromThread_notifyLVAccessEnabled();

		// Run the blocking event loop.
		qDebug() << "Starting Qt event loop in" << QThread::currentThread();
		app.exec();
		qDebug("Qt event loop stopped");

		// It is unlikely but not impossible for LabVIEW to trigger a quit without
		// going through stopEngine(). This line handles the unlikely case.
		sync.fromAnywhere_disableLVAccess();

	} while (isThreadAllocated);
	qDebug() << QThread::currentThread() << "stopped";
}

// TODO: Return version info to protect against mismatched VI-DLL combos
qint32
startEngine(quintptr* _retVal, LStrHandle pluginDir, LStrHandle cliArgs)
{
	std::lock_guard<std::mutex> outerLock(mutex_engineApi);

	if (isRunning)
	{
		*_retVal = 0;
		return LQ::EngineAlreadyRunningError;
	}

	if (!isThreadAllocated)
	{
		std::thread t(&run, LVString::to<QString>(pluginDir));
		t.detach();
		isThreadAllocated = true;
	}

	commandLineArgs = LVString::to<QByteArray>(cliArgs).simplified();
	sync.fromApi_notifyStart();
	sync.fromApi_waitForLVAccessEnabled();

	*_retVal = (quintptr)qApp;
	return LQ::NoError;
}

qint32
stopEngine(bool* preserveThread)
{
	std::lock_guard<std::mutex> outerLock(mutex_engineApi);

	if (!isRunning)
		return LQ::EngineNotRunningError;

	isThreadAllocated = *preserveThread;
	sync.fromAnywhere_disableLVAccess();

	// LQApplication::killWidgets() sends a QDeferredDeleteEvent to all remaining
	// widgets. These events can only be processed while the event loop is running.
	// QCoreApplication::processEvents() doensn't process them.
	QMetaObject::invokeMethod(qApp, "killWidgets", Qt::BlockingQueuedConnection);

	// Wait for QCoreApplication::quit() to finish before returning control to LabVIEW
	QMetaObject::invokeMethod(qApp, "quit", Qt::BlockingQueuedConnection);

	sync.fromApi_cleanup();
	return LQ::NoError;
}

qint32
registerEventRefs(LVUserEventRef* voidRef, LVUserEventRef* boolRef, LVUserEventRef* i32Ref, LVUserEventRef* dblRef, LVUserEventRef* stringRef)
{
	if (!isRunning)
		return LQ::EngineNotRunningError;
	static_cast<LQApplication*>(qApp)->registerEventRefs(voidRef, boolRef, i32Ref, dblRef, stringRef);
	return LQ::NoError;
}

// LabVIEW needs to prepend "2" to the string
qint32
connect_void(quintptr _instance, const char* encodedSignal)
{
	if (!isRunning)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;
	if ( !QMetaObject::checkConnectArgs(encodedSignal, "()") )
		return LQ::IncompatibleArgumentsError;
	auto result = QObject::connect((QObject*)_instance, encodedSignal,
			qApp, SLOT(postLVEvent_void()));

	if (!result)
		return LQ::ConnectionFailedError;
	return LQ::NoError;
}
qint32
connect_bool(quintptr _instance, const char* encodedSignal)
{
	if (!isRunning)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;
	if ( !QMetaObject::checkConnectArgs(encodedSignal, "(bool)") )
		return LQ::IncompatibleArgumentsError;
	auto result = QObject::connect((QObject*)_instance, encodedSignal,
			qApp, SLOT(postLVEvent_bool(bool)));

	if (!result)
		return LQ::ConnectionFailedError;
	return LQ::NoError;
}
qint32
connect_i32(quintptr _instance, const char* encodedSignal)
{
	if (!isRunning)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;
	if ( !QMetaObject::checkConnectArgs(encodedSignal, "(int)") )
		return LQ::IncompatibleArgumentsError;
	auto result = QObject::connect((QObject*)_instance, encodedSignal,
			qApp, SLOT(postLVEvent_i32(int)));

	if (!result)
		return LQ::ConnectionFailedError;
	return LQ::NoError;
}
qint32
connect_dbl(quintptr _instance, const char* encodedSignal)
{
	if (!isRunning)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;
	if ( !QMetaObject::checkConnectArgs(encodedSignal, "(double)") )
		return LQ::IncompatibleArgumentsError;
	auto result = QObject::connect((QObject*)_instance, encodedSignal,
			qApp, SLOT(postLVEvent_dbl(double)));

	if (!result)
		return LQ::ConnectionFailedError;
	return LQ::NoError;
}
qint32
connect_string(quintptr _instance, const char* encodedSignal)
{
	if (!isRunning)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;
	if ( !QMetaObject::checkConnectArgs(encodedSignal, "(QString)") )
		return LQ::IncompatibleArgumentsError;
	auto result = QObject::connect((QObject*)_instance, encodedSignal,
			qApp, SLOT(postLVEvent_string(QString)));

	if (!result)
		return LQ::ConnectionFailedError;
	return LQ::NoError;
}

/*!
	\a encodedMethod must not be an empty string.
*/
static bool
isSignal(const char* encodedMethod)
{
	return encodedMethod[0] == '2';
}

qint32
connect_bySignature(QMetaObject::Connection* _retVal, quintptr sender, const char* encodedSignal, quintptr receiver, const char* encodedMethod)
{
	if (!isRunning)
		return LQ::EngineNotRunningError;
	if (!sender || !receiver)
		return LQ::NullPointerUseError;
	if ( !QMetaObject::checkConnectArgs(encodedSignal, encodedMethod) )
		return LQ::IncompatibleArgumentsError;

	Q_ASSERT( strlen(encodedMethod) > 0 );
	QObject* finalTarget = reinterpret_cast<QObject*>(receiver);
	QByteArray finalEncodedMethod(encodedMethod);
	if ( isSignal(encodedMethod) )
	{
		int signalIndex = finalTarget->metaObject()->indexOfSignal( encodedMethod+1 ); // The encoding simply prepends the signature with a 1-char code
		if (signalIndex < 0)
			return LQ::InvalidSignalError;

		// ASSUMPTION: All native C++ signals are recorded in the QObject's static meta object,
		// but all LabVIEW-defined signals are not.
		if ( signalIndex >= finalTarget->staticMetaObject.methodCount() )
		{
			// LabVIEW-defined signals don't have function bodies generated by the meta-object compiler.
			// Thus, we use LQSignalRelay to activate those signals manually.

			// LabVIEW could call this function from any thread. We must run things in the correct thread.
			auto middleMan = new LQSignalRelay;
			middleMan->moveToThread(finalTarget->thread());
			QMetaObject::invokeMethod(middleMan,
					"finalize",
					Qt::BlockingQueuedConnection,
					Q_ARG(QObject*, finalTarget),
					Q_ARG(int, signalIndex));
			// TODO: Merge finalize() into the constructor, and invoke it in the finalTarget's context?

			// ASSUMPTION: The registration process already validated the signal args. No need to check again.
			finalEncodedMethod = "1activate" + QByteArray( strchr(encodedMethod, '(') );
			finalTarget = middleMan;
		}
	}

	*_retVal = QObject::connect((QObject*)sender, encodedSignal,
			finalTarget, finalEncodedMethod);

	if ( !(*_retVal) )
		return LQ::ConnectionFailedError; // TODO: Delete the LQSignalRelay, if one was created
	return LQ::NoError;
}

qint32
emit_void(quintptr _instance, const char* normalizedSignal)
{
	// ASSUMPTION: (All "emit" functions) Signal parameters are compatible

	if (!isRunning)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	auto obj = reinterpret_cast<QObject*>(_instance);
	auto metaObj = obj->metaObject();
	int signalIndex = metaObj->indexOfSignal(normalizedSignal);
	if (signalIndex == -1)
		return LQ::InvalidSignalError;

	// Use static variables to avoid recreating them each call
	static bool dummy = false;
	static void* argv[]{nullptr, &dummy};
	QMetaObject::activate(obj, signalIndex, reinterpret_cast<void**>(argv));
	return LQ::NoError;
}

qint32
emit_bool(quintptr _instance, const char* normalizedSignal, bool* data)
{
	if (!isRunning)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	auto obj = reinterpret_cast<QObject*>(_instance);
	auto metaObj = obj->metaObject();
	int signalIndex = metaObj->indexOfSignal(normalizedSignal);
	if (signalIndex == -1)
		return LQ::InvalidSignalError;

	void* argv[]{nullptr, data};
	QMetaObject::activate(obj, signalIndex, reinterpret_cast<void**>(argv));
	return LQ::NoError;
}

qint32
emit_i32(quintptr _instance, const char* normalizedSignal, qint32* data)
{
	if (!isRunning)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	auto obj = reinterpret_cast<QObject*>(_instance);
	auto metaObj = obj->metaObject();
	int signalIndex = metaObj->indexOfSignal(normalizedSignal);
	if (signalIndex == -1)
		return LQ::InvalidSignalError;

	void* argv[]{nullptr, data};
	QMetaObject::activate(obj, signalIndex, reinterpret_cast<void**>(argv));
	return LQ::NoError;
}

qint32
emit_dbl(quintptr _instance, const char* normalizedSignal, double* data)
{
	if (!isRunning)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	auto obj = reinterpret_cast<QObject*>(_instance);
	auto metaObj = obj->metaObject();
	int signalIndex = metaObj->indexOfSignal(normalizedSignal);
	if (signalIndex == -1)
		return LQ::InvalidSignalError;

	void* argv[]{nullptr, data};
	QMetaObject::activate(obj, signalIndex, reinterpret_cast<void**>(argv));
	return LQ::NoError;
}

qint32
emit_string(quintptr _instance, const char* normalizedSignal, LStrHandle data)
{
	if (!isRunning)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	auto obj = reinterpret_cast<QObject*>(_instance);
	auto metaObj = obj->metaObject();
	int signalIndex = metaObj->indexOfSignal(normalizedSignal);
	if (signalIndex == -1)
		return LQ::InvalidSignalError;

	// NOTE: Wasted operations! Converting from LStr to QString to LStr again
	auto str = LVString::to<QString>(data);
	void* argv[]{nullptr, &str};
	QMetaObject::activate(obj, signalIndex, reinterpret_cast<void**>(argv));
	return LQ::NoError;
}

qint32
registerLQObject(quintptr _instance, LVArray<LStrHandle>** signalList, LStrHandle superClassName)
{
	if (!isRunning)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	LQ::Error errorCode;
	QMetaObject::invokeMethod(qApp,
				"finalizeBinding",
				Qt::BlockingQueuedConnection,
				Q_RETURN_ARG(LQ::Error, errorCode),
				Q_ARG(QObject*, (QObject*)_instance),
				Q_ARG(LVArray<LStrHandle>**, signalList),
				Q_ARG(LStrHandle, superClassName));

	return errorCode;
}

/*!
	Finds the value returned by QObject::senderSignalIndex() as called
	from a slot that was executed in response to a signal emission.

	This function is like QMetaObject::indexOfSignal(), except that it returns
	the index of the "full" version of a signal that has default parameters.
*/
qint32
findSignalIndex(qint64* _retVal, quintptr _instance, const char* normalizedSignal)
{
	if (!isRunning)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray head(normalizedSignal);
	head.chop(1); // Chop off the trailing ')' to match the start of other overloads

	*_retVal = -1;
	int maxLength = 0;
	auto metaObject = ((QObject*)_instance)->metaObject();
	for(int i = 0; i < metaObject->methodCount(); ++i)
	{
		const QMetaMethod candidateMethod = metaObject->method(i);
		const QByteArray candidateStr(candidateMethod.methodSignature());
		if (candidateMethod.methodType() == QMetaMethod::Signal
				&& candidateStr.startsWith(head)
				&& candidateStr.length() >= maxLength)
		{
			maxLength = candidateStr.length();
			*_retVal = i;
		}

		// Possible optimization: moc always generates meta method for the full version
		// before the reduced version(s). We could break the loop at the first match.
		// However, that would be the wrong index for an overridden virtual signal (not
		// that I can think of any such cases in Qt)
	}
	return LQ::NoError;
}

qint32
QObject_deleteLater(uintptr_t _instance)
{
	if (!isRunning)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	reinterpret_cast<QObject*>(_instance)->deleteLater();
	return LQ::NoError;
}
