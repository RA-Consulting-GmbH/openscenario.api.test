@echo off
setlocal EnableDelayedExpansion

set _cd=%~dp0
set _me=%~nx0
call :dequote _cd
call :dequote _me

:: RAC cmake.exe local path
set CMAKE_EXE=..\..\..\..\CMake\bin\cmake.exe
set CMAKE_EXE_TMP=%CMAKE_EXE%
echo %CMAKE_EXE_TMP%

:: If RAC local cmake does not exist, then try system cmake
if not exist %CMAKE_EXE_TMP% (
    set CMAKE_EXE=cmake.exe
    echo RAC cmake not here
    echo !CMAKE_EXE!
    where !CMAKE_EXE! >nul 2>nul
    if errorlevel 1 (
        echo cmake.exe not found in path.
        echo Please  install cmake and add its bin path to the PATH environment variable.
        pause
        exit /b 1
    ) else (
      echo False usage of RAC cmake.
    )
) else (
    echo Using RAC cmake.
    set CMAKE_EXE=..\%CMAKE_EXE%
)

mkdir "%_cd%\VS2017_x64"
cd /d "%_cd%\VS2017_x64"
%CMAKE_EXE% -G "Visual Studio 15 2017 Win64"  "..\..\..\." -DMASTER_PROJECT=TRUE
if errorlevel 1 (
    pause
    exit /b 1
)

goto :eof


:: *****************************
:: * HELPERS
:: *****************************

:DeQuote
for /f "delims=" %%A in ('echo %%%1%%') do set %1=%%~A
Goto :eof
