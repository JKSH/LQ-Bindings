REM Ensure that your compiler is found in the PATH (e.g. by calling this script via
REM the x86 Native Tools Command Prompt for VS 2017)

@ECHO off

REM ==================================================================================
REM (Edit these parameters before running this script, if necessary)
REM ----------------------------------------------------------------------------------
SET QT_ROOT_32=C:\Qt\5.12.11\msvc2017
SET QT_ROOT_64=C:\Qt\5.12.11\msvc2017_64
SET QWT_ROOT_32=C:\Qwt\Qwt-6.2.0_x86
SET QWT_ROOT_64=C:\Qwt\Qwt-6.2.0_x64
SET LV_ROOT_32=C:\Program Files (x86)\National Instruments\LabVIEW 2014
SET LV_ROOT_64=C:\Program Files\National Instruments\LabVIEW 2014
SET MAKE=nmake
SET NIPKG_EXE="C:\Program Files\National Instruments\NI Package Manager\nipkg.exe"
SET LV_PORT=3363
SET PKG_VERSION=0.2.2
REM ==================================================================================

REM Set absolute paths according to this project's folder structure
SET LQ_DEV_ROOT=%cd%
SET BUILD_DIR=%LQ_DEV_ROOT%\builds
SET OUTPUT_DIR=%BUILD_DIR%\Runtime
SET PKG_DIR=%OUTPUT_DIR%\Package
SET PKG_ARCH=%~1
SET CPP_DIR=%BUILD_DIR%\Cpp_%PKG_ARCH%
IF %PKG_ARCH%==x64 (
	SET "LV_ROOT=%LV_ROOT_64%"
	SET QT_ROOT=%QT_ROOT_64%
	SET QWT_ROOT=%QWT_ROOT_64%
	SET PKG_DATA_DIR=%PKG_DIR%\data\ProgramFiles_64\LQ

	GOTO :startBuild
)
IF %PKG_ARCH%==x86 (
	SET "LV_ROOT=%LV_ROOT_32%"
	SET QT_ROOT=%QT_ROOT_32%
	SET QWT_ROOT=%QWT_ROOT_32%
	SET PKG_DATA_DIR=%PKG_DIR%\data\ProgramFiles_32\LQ

	GOTO :startBuild
)

REM Print instructions and terminate
ECHO Usage: %0 arch
ECHO   where arch is "x86" or "x64"

GOTO :eof


:startBuild
REM Reset ERRORLEVEL to 0 before starting
ver > nul


REM Clean out the distribution folder
IF EXIST %OUTPUT_DIR% ( rmdir %OUTPUT_DIR% /S /Q )
IF NOT %ERRORLEVEL%==0 GOTO :eof


REM Prepare shadow build folder for shared library
IF NOT EXIST %CPP_DIR% mkdir %CPP_DIR%
cd %CPP_DIR%
IF NOT %ERRORLEVEL%==0 GOTO :eof


REM Build LQ shared library
%QT_ROOT%\bin\qmake.exe %LQ_DEV_ROOT%\src\Cpp\ "CINTOOLS_PATH=%LV_ROOT%\cintools" "QWT_PATH=%QWT_ROOT%" && %MAKE%
IF NOT %ERRORLEVEL%==0 ( cd %LQ_DEV_ROOT% && EXIT /B -1 )
cd %LQ_DEV_ROOT%


REM Copy files
robocopy %LQ_DEV_ROOT%\3rdparty\     %PKG_DATA_DIR%\3rdparty\ /E
COPY     %LQ_DEV_ROOT%\LICENSE.MPLv2 %PKG_DATA_DIR%\
COPY     %LQ_DEV_ROOT%\README.md     %PKG_DATA_DIR%\
mkdir                                %PKG_DATA_DIR%\bin\
COPY     %CPP_DIR%\release\LQ.dll    %PKG_DATA_DIR%\bin\
COPY     %QWT_ROOT%\lib\qwt.dll      %PKG_DATA_DIR%\bin\
%QT_ROOT%\bin\windeployqt.exe --no-translations --no-system-d3d-compiler --no-compiler-runtime --no-angle --no-opengl-sw %PKG_DATA_DIR%\bin\LQ.dll
%QT_ROOT%\bin\windeployqt.exe --no-translations --no-system-d3d-compiler --no-compiler-runtime --no-angle --no-opengl-sw %PKG_DATA_DIR%\bin\qwt.dll
IF NOT %ERRORLEVEL%==0 GOTO :eof


REM Write the package metadata (modelled after the Debian/Opkg format)
LabVIEWCLI.exe -LabVIEWPath "%LV_ROOT%\LabVIEW.exe" -PortNumber %LV_PORT% -OperationName RunVI -VIPath "%LQ_DEV_ROOT%\utils\CLI_Write Nipkg Metadata.vi" --rootdir "%PKG_DIR%" --type runtime --version %PKG_VERSION% --arch %PKG_ARCH%
IF NOT %ERRORLEVEL%==0 GOTO :eof

REM Build package
%NIPKG_EXE% pack %PKG_DIR%\ %OUTPUT_DIR%
IF NOT %ERRORLEVEL%==0 GOTO :eof


ECHO Done. The output files are in %OUTPUT_DIR%.
