REM Ensure that you have updated the "examples" submodule to the latest version before
REM running this script.
REM 
REM From the command line, run:
REM     git submodule init
REM     git submodule update

@ECHO off
SETLOCAL EnableDelayedExpansion

REM ==================================================================================
REM (Edit these parameters before running this script, if necessary)
REM ----------------------------------------------------------------------------------
SET NIPKG_EXE="C:\Program Files\National Instruments\NI Package Manager\nipkg.exe"
SET LV_EXE="C:\Program Files (x86)\National Instruments\LabVIEW 2014\LabVIEW.exe"
SET LV_PORT=3363
SET LV_YEAR_START=2016
SET LV_YEAR_END=2021
SET PKG_VERSION=0.2.1
REM ==================================================================================

REM Set absolute paths according to this project's folder structure
SET LQ_DEV_ROOT=%cd%
SET BUILD_DIR=%LQ_DEV_ROOT%\builds
SET OUTPUT_DIR=%BUILD_DIR%\LQ
SET PKG_DIR=%OUTPUT_DIR%\Package

REM Start with 32-bit specific paths
CALL :setBitness 32


REM Reset ERRORLEVEL to 0 before starting
ver > nul


REM Clean out the distribution folder
IF EXIST %OUTPUT_DIR% ( rmdir %OUTPUT_DIR% /S /Q )
IF NOT %ERRORLEVEL%==0 GOTO :eof


REM Copy files
robocopy %LQ_DEV_ROOT%\examples\exbins\ %PKG_DATA_DIR%\examples\exbins\
robocopy %LQ_DEV_ROOT%\examples\LQ\  %PKG_DATA_DIR%\examples\LQ\ /E /XF README.md *.aliases *.lvlps
COPY     %LQ_DEV_ROOT%\examples\LICENSE.MIT %PKG_DATA_DIR%\examples\LQ\
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


REM Build a package for each LabVIEW version for one particular bitness
:createBitnessPackages
FOR /L %%Y IN (%LV_YEAR_START%,1,%LV_YEAR_END%) DO (
	CALL :packOneVersion %%Y
	IF NOT %ERRORLEVEL%==0 GOTO :eof
)


REM When 32-bit packages are done, repeat for 64-bit packages
IF %BITNESS%==32 (
	CALL :setBitness 64
	MOVE !NEW! !PKG_DATA_DIR!
	IF NOT !ERRORLEVEL!==0 GOTO :eof
	
	GOTO :createBitnessPackages
)

ECHO Done. The output files are in %OUTPUT_DIR%.
GOTO :eof


REM ==================================================================================
REM Subroutine for setting bitness-specific variables
REM ==================================================================================
:setBitness

IF %1==64 (
	SET BITNESS=64
	SET PKG_ARCH=x64
	SET NI_DIR_SUFFIX=DIR64
) else (
	SET BITNESS=32
	SET PKG_ARCH=x86
	SET NI_DIR_SUFFIX=DIR
)
SET PKG_DATA_DIR=%PKG_DIR%\data\ni-paths-LV%LV_YEAR_START%%NI_DIR_SUFFIX%
SET VI_LIB_DIR=%PKG_DATA_DIR%\vi.lib\addons\LQ

EXIT /B


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
