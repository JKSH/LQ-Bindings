@ECHO off

REM ==================================================================================
REM (Edit these parameters before running this script, if necessary)
REM ----------------------------------------------------------------------------------
SET QT_ROOT=C:\Qt\Online\5.12.0\msvc2017
SET QWT_ROOT=C:\Qwt-6.1.3
SET MAKE=nmake
SET LV_EXE_PATH="C:\Program Files (x86)\National Instruments\LabVIEW 2014\LabVIEW.exe"
SET LV_PORT=3363
REM ==================================================================================

REM Set absolute paths according to this project's folder structure
SET LQ_DEV_ROOT=%cd%
SET TARGET_DIR=%LQ_DEV_ROOT%\builds\LQ


REM Reset ERRORLEVEL to 0 before starting
ver > nul


REM Clean out the distribution folder
IF EXIST %TARGET_DIR% ( rmdir %TARGET_DIR% /S /Q )
IF NOT %ERRORLEVEL%==0 GOTO End


REM Prepare shadow build folder for shared library
IF NOT EXIST builds\Cpp mkdir builds\Cpp
cd builds\Cpp\
IF NOT %ERRORLEVEL%==0 GOTO End


REM Build and copy LQ shared library
%QT_ROOT%\bin\qmake.exe %LQ_DEV_ROOT%\src\Cpp\
%MAKE%
%MAKE% install
IF NOT %ERRORLEVEL%==0 ( cd %LQ_DEV_ROOT% && EXIT /B -1 )
cd %LQ_DEV_ROOT%


REM Copy other files
robocopy %LQ_DEV_ROOT%\3rdparty\     %TARGET_DIR%\3rdparty\ /E
robocopy %LQ_DEV_ROOT%\examples\     %TARGET_DIR%\examples\ /E
robocopy %LQ_DEV_ROOT%\src\LabVIEW\  %TARGET_DIR%\src\LabVIEW\ /E
COPY     %LQ_DEV_ROOT%\LICENSE.MPLv2 %TARGET_DIR%\
COPY     %LQ_DEV_ROOT%\README.md     %TARGET_DIR%\
COPY     %QWT_ROOT%\lib\qwt.dll      %TARGET_DIR%\bin\
%QT_ROOT%\bin\windeployqt.exe --no-translations --no-system-d3d-compiler --no-compiler-runtime --no-angle --no-opengl-sw %TARGET_DIR%\bin\LQ.dll
%QT_ROOT%\bin\windeployqt.exe --no-translations --no-system-d3d-compiler --no-compiler-runtime --no-angle --no-opengl-sw %TARGET_DIR%\bin\qwt.dll
IF NOT %ERRORLEVEL%==0 GOTO End


REM Discard unnecessary files (local temporary files, example README files, object files)
DEL /S %TARGET_DIR%\*.aliases
DEL /S %TARGET_DIR%\*.lvlps
DEL /S %TARGET_DIR%\bin\LQ.lib
DEL /S %TARGET_DIR%\examples\*README.md


REM Un-separate compiled code from source to greatly boost performance for library users
LabVIEWCLI.exe -LabVIEWPath %LV_EXE_PATH% -PortNumber %LV_PORT% -OperationName RunVI -VIPath "%LQ_DEV_ROOT%\utils\CLI_Disable Source Separation.vi" %TARGET_DIR%\src\LabVIEW\
IF NOT %ERRORLEVEL%==0 GOTO End


REM Execute the LabVIEW build specs
LabVIEWCLI.exe -LabVIEWPath %LV_EXE_PATH% -PortNumber %LV_PORT% -OperationName ExecuteBuildSpec -ProjectPath %LQ_DEV_ROOT%\utils\LQ-Packager.lvproj -BuildSpecName "Source Distribution"
IF NOT %ERRORLEVEL%==0 GOTO End

LabVIEWCLI.exe -LabVIEWPath %LV_EXE_PATH% -PortNumber %LV_PORT% -OperationName ExecuteBuildSpec -ProjectPath %LQ_DEV_ROOT%\utils\LQ-Packager.lvproj -BuildSpecName "Package"
IF NOT %ERRORLEVEL%==0 GOTO End


ECHO Done. See builds\LQ-Packager\ for the output files.
:End
