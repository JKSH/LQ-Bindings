REM Ensure that your compiler is found in the PATH (e.g. by calling this script via
REM the Developer Command Prompt for VS 2017)

@ECHO off

REM ==================================================================================
REM (Edit these parameters before running this script, if necessary)
REM ----------------------------------------------------------------------------------
SET QT_ROOT=C:\Qt\5.12.0\msvc2017
SET QWT_ROOT=C:\Qwt-6.1.3
SET MAKE=nmake
SET NIPKG_EXE="C:\Program Files\National Instruments\NI Package Manager\nipkg.exe"
SET LV_EXE="C:\Program Files (x86)\National Instruments\LabVIEW 2014\LabVIEW.exe"
SET LV_PORT=3363
REM ==================================================================================

REM Set absolute paths according to this project's folder structure
SET LQ_DEV_ROOT=%cd%
SET BUILD_DIR=%LQ_DEV_ROOT%\builds
SET OUTPUT_DIR=%BUILD_DIR%\LQ
SET CPP_DIR=%BUILD_DIR%\Cpp
SET PKG_DIR=%OUTPUT_DIR%\Package
SET PKG_DATA_DIR=%PKG_DIR%\data\ni-paths-LV2014DIR
SET VI_LIB_DIR=%PKG_DATA_DIR%\vi.lib\addons\LQ


REM Reset ERRORLEVEL to 0 before starting
ver > nul


REM Clean out the distribution folder
IF EXIST %OUTPUT_DIR% ( rmdir %OUTPUT_DIR% /S /Q )
IF NOT %ERRORLEVEL%==0 GOTO End


REM Prepare shadow build folder for shared library
IF NOT EXIST %CPP_DIR% mkdir %CPP_DIR%
cd %CPP_DIR%
IF NOT %ERRORLEVEL%==0 GOTO End


REM Build LQ shared library
%QT_ROOT%\bin\qmake.exe %LQ_DEV_ROOT%\src\Cpp\
%MAKE%
IF NOT %ERRORLEVEL%==0 ( cd %LQ_DEV_ROOT% && EXIT /B -1 )
cd %LQ_DEV_ROOT%


REM Copy files
robocopy %LQ_DEV_ROOT%\examples\     %PKG_DATA_DIR%\examples\ /E
robocopy %LQ_DEV_ROOT%\3rdparty\     %VI_LIB_DIR%\3rdparty\ /E
robocopy %LQ_DEV_ROOT%\src\LabVIEW\  %VI_LIB_DIR%\ /E
COPY     %LQ_DEV_ROOT%\LICENSE.MPLv2 %VI_LIB_DIR%\
COPY     %LQ_DEV_ROOT%\README.md     %VI_LIB_DIR%\
mkdir                                %VI_LIB_DIR%\bin\
COPY     %CPP_DIR%\release\LQ.dll    %VI_LIB_DIR%\bin\
COPY     %QWT_ROOT%\lib\qwt.dll      %VI_LIB_DIR%\bin\
%QT_ROOT%\bin\windeployqt.exe --no-translations --no-system-d3d-compiler --no-compiler-runtime --no-angle --no-opengl-sw %VI_LIB_DIR%\bin\LQ.dll
%QT_ROOT%\bin\windeployqt.exe --no-translations --no-system-d3d-compiler --no-compiler-runtime --no-angle --no-opengl-sw %VI_LIB_DIR%\bin\qwt.dll
IF NOT %ERRORLEVEL%==0 GOTO End


REM Discard unnecessary files (local temporary files, example README files)
DEL /S %PKG_DIR%\*.aliases
DEL /S %PKG_DIR%\*.lvlps
DEL /S %PKG_DATA_DIR%\examples\*README.md


REM Un-separate compiled code from source to greatly boost performance for library users
LabVIEWCLI.exe -LabVIEWPath %LV_EXE% -PortNumber %LV_PORT% -OperationName RunVI -VIPath "%LQ_DEV_ROOT%\utils\CLI_Disable Source Separation.vi" %VI_LIB_DIR%\
IF NOT %ERRORLEVEL%==0 GOTO End


REM Write the package metadata (modelled after the Debian/Opkg format)
LabVIEWCLI.exe -LabVIEWPath %LV_EXE% -PortNumber %LV_PORT% -OperationName RunVI -VIPath "%LQ_DEV_ROOT%\utils\CLI_Write Nipkg Metadata.vi" %PKG_DIR%\ 2014 0.2.0 x86
IF NOT %ERRORLEVEL%==0 GOTO End


REM Create the final package
%NIPKG_EXE% pack %PKG_DIR%\ %OUTPUT_DIR%
IF NOT %ERRORLEVEL%==0 GOTO End


ECHO Done. The output files are in %OUTPUT_DIR%.
:End
