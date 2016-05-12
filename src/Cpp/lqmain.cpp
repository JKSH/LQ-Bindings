/*\
 * Copyright (c) 2016 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#include "lqmain.h"
#include "lqbridge.h"
#include "lqerrors.h"
#include <thread>
#include <QThread>

// STRATEGY: The Bridge pointer is always NULL before the GUI event loop is running,
// and NULL after the event loop has stopped
Bridge* bridge = nullptr;

static void
run()
{
	// Note: The Bridge needs an active event loop to run slots

	int            argc = 1;
	QByteArray     argv0("LQWidgets.dll\0");
	QVector<char*> argv{argv0.data(), nullptr};

	LQApplication app(argc, argv.data());
	app.setQuitOnLastWindowClosed(false); // Only quit explicitly when commanded from LabVIEW

	// Tie the Bridge's lifetime to the QApplication object
	bridge = new Bridge(&app);

	qDebug() << "Starting Qt event loop in" << QThread::currentThread();
	app.exec();

	// Clean up
	bridge = nullptr;
	qDebug("Qt event loop stopped");
}

// TODO: Return version info to protect against mismatched VI-DLL combos
qint32
startWidgetEngine(quintptr* _retVal, LStrHandle pluginDir)
{
	if (bridge)
	{
		*_retVal = 0;
		return LQ::EngineAlreadyRunningError;
	}

	QCoreApplication::addLibraryPath(  QString::fromUtf8( copyFromLStr(pluginDir) )  );
	std::thread t(&run);
	t.detach();

	// Block until the engine has been initialized
	while (!bridge)
		std::this_thread::sleep_for(std::chrono::milliseconds(20));

	*_retVal = (quintptr)qApp;
	return LQ::NoError;
}

qint32
stopWidgetEngine()
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	// LQApplication::killWidgets() sends a QDeferredDeleteEvent to all remaining
	// widgets. These events can only be processed while the event loop is running.
	// QCoreApplication::processEvents() doensn't process them.
	QMetaObject::invokeMethod(qApp, "killWidgets", Qt::BlockingQueuedConnection);

	// Wait for QCoreApplication::quit() to finish before returning control to LabVIEW
	QMetaObject::invokeMethod(qApp, "quit", Qt::BlockingQueuedConnection);
	return LQ::NoError;
}

qint32
registerEventRefs(LVUserEventRef* voidRef, LVUserEventRef* boolRef, LVUserEventRef* i32Ref, LVUserEventRef* dblRef, LVUserEventRef* stringRef)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	static_cast<LQApplication*>(qApp)->registerEventRefs(voidRef, boolRef, i32Ref, dblRef, stringRef);
	return LQ::NoError;
}

// LabVIEW needs to prepend "2" to the string
qint32
connect_void(quintptr _instance, const char* encodedSignal)
{
	if (!bridge)
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
	if (!bridge)
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
	if (!bridge)
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
	if (!bridge)
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
	if (!bridge)
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
	if (!bridge)
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

	if (!bridge)
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
	if (!bridge)
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
	if (!bridge)
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
	if (!bridge)
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
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	auto obj = reinterpret_cast<QObject*>(_instance);
	auto metaObj = obj->metaObject();
	int signalIndex = metaObj->indexOfSignal(normalizedSignal);
	if (signalIndex == -1)
		return LQ::InvalidSignalError;

	// NOTE: Wasted operations! Converting from LStr to QString to LStr again
	QString str = QString::fromUtf8(copyFromLStr(data));
	void* argv[]{nullptr, &str};
	QMetaObject::activate(obj, signalIndex, reinterpret_cast<void**>(argv));
	return LQ::NoError;
}

qint32
registerLQObject(quintptr _instance, LVArray<LStrHandle>** signalList, LStrHandle superClassName)
{
	if (!bridge)
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
	if (!bridge)
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
