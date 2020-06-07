REM Ensure that you have updated the "examples" submodule to the latest version before
REM running this script.
REM 
REM From the command line, run:
REM     git submodule init
REM     git submodule update

@ECHO off

REM ==================================================================================
REM (Edit these parameters before running this script, if necessary)
REM ----------------------------------------------------------------------------------
SET BITNESS=32
SET NIPKG_EXE="C:\Program Files\National Instruments\NI Package Manager\nipkg.exe"
SET LV_EXE="C:\Program Files (x86)\National Instruments\LabVIEW 2014\LabVIEW.exe"
SET LV_PORT=3363
SET LV_YEAR_START=2014
SET LV_YEAR_END=2018
SET PKG_VERSION=0.2.1
REM ==================================================================================

REM Set absolute paths according to this project's folder structure
REM TODO: Just use %BUILD_DIR% and manually write Cpp/LQ
IF %BITNESS%==64 (
	SET PKG_ARCH=x64
	SET NI_DIR_SUFFIX=DIR64
) else (
	SET PKG_ARCH=x86
	SET NI_DIR_SUFFIX=DIR
)
SET LQ_DEV_ROOT=%cd%
SET BUILD_DIR=%LQ_DEV_ROOT%\builds
SET OUTPUT_DIR=%BUILD_DIR%\LQ
SET PKG_DIR=%OUTPUT_DIR%\Package
SET PKG_DATA_DIR=%PKG_DIR%\data\ni-paths-LV%LV_YEAR_START%%NI_DIR_SUFFIX%
SET VI_LIB_DIR=%PKG_DATA_DIR%\vi.lib\addons\LQ


REM Reset ERRORLEVEL to 0 before starting
ver > nul


REM Clean out the distribution folder
IF EXIST %OUTPUT_DIR% ( rmdir %OUTPUT_DIR% /S /Q )
IF NOT %ERRORLEVEL%==0 GOTO :eof


REM Copy files
robocopy %LQ_DEV_ROOT%\examples\     %PKG_DATA_DIR%\examples\ /E /XD .git /XF .git* README.md *.aliases *.lvlps
robocopy %LQ_DEV_ROOT%\3rdparty\     %VI_LIB_DIR%\3rdparty\ /E
robocopy %LQ_DEV_ROOT%\src\LabVIEW\  %VI_LIB_DIR%\ /E
COPY     %LQ_DEV_ROOT%\LICENSE.MPLv2 %VI_LIB_DIR%\
COPY     %LQ_DEV_ROOT%\README.md     %VI_LIB_DIR%\
IF NOT %ERRORLEVEL%==0 GOTO :eof


REM Discard local temporary files
DEL /S %PKG_DIR%\*.aliases
DEL /S %PKG_DIR%\*.lvlps


REM Un-separate compiled code from source to greatly boost performance for library users
LabVIEWCLI.exe -LabVIEWPath %LV_EXE% -PortNumber %LV_PORT% -OperationName RunVI -VIPath "%LQ_DEV_ROOT%\utils\CLI_Disable Source Separation.vi" %VI_LIB_DIR%\
IF NOT %ERRORLEVEL%==0 GOTO :eof


REM Build a package for each LabVIEW version
FOR /L %%Y IN (%LV_YEAR_START%,1,%LV_YEAR_END%) DO (
	CALL :packOneVersion %%Y
	IF NOT %ERRORLEVEL%==0 GOTO :eof
)


ECHO Done. The output files are in %OUTPUT_DIR%.
GOTO :eof


REM ==================================================================================
REM Subroutine for making one package
REM ==================================================================================
:packOneVersion

REM Write the package metadata (modelled after the Debian/Opkg format)
LabVIEWCLI.exe -LabVIEWPath %LV_EXE% -PortNumber %LV_PORT% -OperationName RunVI -VIPath "%LQ_DEV_ROOT%\utils\CLI_Write Nipkg Metadata.vi" --rootdir %PKG_DIR%\ --type dev --year %1 --version %PKG_VERSION% --arch %PKG_ARCH%
IF NOT %ERRORLEVEL%==0 GOTO :eof


REM Create the final package
%NIPKG_EXE% pack %PKG_DIR%\ %OUTPUT_DIR%
IF NOT %ERRORLEVEL%==0 GOTO :eof


REM Prepare for next year
SET THIS_YEAR=%1
SET OLD=%PKG_DIR%\data\ni-paths-LV%THIS_YEAR%%NI_DIR_SUFFIX%
SET /A NEXT_YEAR=%1+1
SET NEW=%PKG_DIR%\data\ni-paths-LV%NEXT_YEAR%%NI_DIR_SUFFIX%
MOVE %OLD% %NEW%

EXIT /B
