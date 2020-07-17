@echo off
setlocal

set _cd=%~dp0
set _me=%~nx0
call :dequote _cd
call :dequote _me

mkdir "%_cd%\VS2017"
cd /d "%_cd%\VS2017"
..\..\..\..\..\CMake\bin\cmake -G "Visual Studio 15 2017"  "..\..\..\." -DMASTER_PROJECT=TRUE
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


