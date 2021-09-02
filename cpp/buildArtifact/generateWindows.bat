@echo off
setlocal EnableDelayedExpansion


::################################
::# Check if cmake is installed
set HELP=false
if "%1"=="" set HELP=true
if "%1"=="h" set HELP=true
if "%1"=="help" set HELP=true
if "%1"=="-h" set HELP=true
if "%1"=="-help" set HELP=true
if "%1"=="--h" set HELP=true
if "%1"=="--help" set HELP=true
if "%1"=="/h" set HELP=true
if "%1"=="/help" set HELP=true
if %HELP%==true (
    echo "%~n0 (all (VS2010|...|VS2022) [release] [shared|static] [Win32|x64]) | ((VS2010|...|VS2022) [release|debug] [shared|static] [Win32|x64] [make])"
    echo "Multi configuration:    all (VS2010|...|VS2022) [release] [shared|static] [Win32|x64]"
    echo "  builds and compiles multiple projects or even all projects at once (takes a long time)"
    echo "Single configuration: (VS2010|...|VS2022) [release|debug] [shared|static] [Win32|x64] [make]"
    echo "  builds and optionaly compiles only one project (quite fast)"
    exit /b 0
)


::################################
::# Check if cmake is installed
set CMAKE_EXE=cmake.exe
where !CMAKE_EXE! >nul 2>nul
if errorlevel 1 (
    echo cmake is required to build the software. Please install cmake and add its bin path to the PATH environment variable. Aborting
    pause
    exit /b 1
)


::################################
::# Script dir
set _cd=%~dp0
set _me=%~nx0
call :dequote _cd
call :dequote _me


::################################
::# Parse cmd line params
if "%1"=="all" (
    set VISUAL_STUDIO=Visual Studio 15 2017
    set VS_S=VS2017
    set PROC_ARCH=Win32, x64
    set BUILD_TYPES=release, debug
    set BINDING_TYPES=shared, static
    set MAKE=yes
) else (
    :: make command
    set VISUAL_STUDIO=Visual Studio 15 2017
    set VS_S=VS2017
    set PROC_ARCH=x64
    set BUILD_TYPES=release
    set BINDING_TYPES=shared
    set MAKE=no
)
for %%I in (%*) do (
    call :ConfigSub %%I
    if errorlevel 1 (
        echo.
        echo Error: unknown parameter %%I
        echo.
        call :NoError
    )
)


::################################################################################
::# Build the project
::echo PROC_ARCH=%PROC_ARCH%
::echo BINDING_TYPES=%BINDING_TYPES%
set PLATFORM_NAME=Windows
for %%I in (%PROC_ARCH%) do (
    echo I=%%I
    set VS2019_OR_BETTER=false
    if %VS_S%==VS2022 set VS2019_OR_BETTER=true
    if %VS_S%==VS2019 set VS2019_OR_BETTER=true
    ::echo !VS2019_OR_BETTER!
    if !VS2019_OR_BETTER!==true (
        set PROC_ARCH_L=
        if %%I==x64 (
            set PROC_ARCH_ARG=-A x64
            set PA=x64
        ) else (
            set PROC_ARCH_ARG=-A Win32
            set PA=Win32
        )
    ) else (
        set PROC_ARCH_ARG=
        if %%I==x64 (
            set PROC_ARCH_L= Win64
            set PA=x64
        ) else (
            set PROC_ARCH_L=
            set PA=Win32
        )
    )
    for %%J in (%BINDING_TYPES%) do (
        ::echo J=%%J
        if %%J==shared (
            set BUILD_SHARED_LIBS=ON
            set BT=Shared
        ) else (
            set BUILD_SHARED_LIBS=OFF
            set BT=Static
        )
        echo.
        echo Building Windows project files for %VS_S% !PA! !BT! ...
        echo.
        set PROJECT_FOLDER=cgMulti%VS_S%!PA!!BT!
        mkdir "%_cd%..\build\!PROJECT_FOLDER!"
        cd /d "%_cd%..\build\!PROJECT_FOLDER!"
        %CMAKE_EXE% -G "%VISUAL_STUDIO%!PROC_ARCH_L!" !PROC_ARCH_ARG! -Wno-dev -DBUILD_SHARED_LIBS=!BUILD_SHARED_LIBS! -DPLATFORM_PARAM=%PLATFORM_NAME% -DMASTER_PROJECT=TRUE ../../
        echo.
        if errorlevel 1 (
            echo Errors occurred during project generation
            pause
            exit /b 1
        )
        if %MAKE%==yes (
            echo.
            echo Compiling Windows project files for %VS_S% !PA! !BT! ...
            echo.
            for %%K in (%BUILD_TYPES%) do (
                for /f "tokens=1,2 delims=," %%l in (%_cd%msbuildcmd.txt) do set VSMS_BUILD=%%m
                "!VSMS_BUILD!" OpenScenario-Cpp.sln /t:Build /p:Configuration=%%K /p:Platform=!PA!
            )
        )
    )
)
del "%_cd%msbuildcmd.txt"

goto :eof


:: *****************************
:: * HELPERS
:: *****************************

:DeQuote
for /f "delims=" %%A in ('echo %%%1%%') do set %1=%%~A
goto :eof


::################################
::# Prefent exiting the for loop on error, e.g. unknown parameter
:NoError
    exit /b 0


::################################
::# Configure parameter for cmake call
:ConfigSub
    ::echo SI=%1
    goto :switch-case-%1 2>nul
    goto :switch-case-end
    :switch-case-VS2022
        set VISUAL_STUDIO=Visual Studio 17 2022
        set VS_S=VS2022
        goto :switch-case-end
    :switch-case-VS2019
        set VISUAL_STUDIO=Visual Studio 16 2019
        set VS_S=VS2019
        goto :switch-case-end
    :switch-case-VS2017
        set VISUAL_STUDIO=Visual Studio 15 2017
        set VS_S=VS2017
        goto :switch-case-end
    :switch-case-VS2015
        set VISUAL_STUDIO=Visual Studio 14 2015
        set VS_S=VS2015
        goto :switch-case-end
    :switch-case-VS2013
        set VISUAL_STUDIO=Visual Studio 12 2013
        set VS_S=VS2013
        goto :switch-case-end
    :switch-case-VS2012
        set VISUAL_STUDIO=Visual Studio 11 2012
        set VS_S=VS2012
        goto :switch-case-end
    :switch-case-VS2010
        set VISUAL_STUDIO=Visual Studio 10 2010
        set VS_S=VS2010
        goto :switch-case-end
    :switch-case-release
        set BUILD_TYPES=release
        goto :switch-case-end
    :switch-case-debug
        set BUILD_TYPES=debug
        goto :switch-case-end
    :switch-case-Win32
    :switch-case-win32
        set PROC_ARCH=Win32
        goto :switch-case-end
    :switch-case-x64
        set PROC_ARCH=x64
        goto :switch-case-end
    :switch-case-shared
        set BINDING_TYPES=shared
        goto :switch-case-end
    :switch-case-static
        set BINDING_TYPES=static
        goto :switch-case-end
    :switch-case-make
        set MAKE=yes
        goto :switch-case-end
    :switch-case-all:
    :switch-case-end
        goto :eof
