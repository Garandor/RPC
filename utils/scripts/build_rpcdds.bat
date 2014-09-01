:: This script build FASTRPC library for platform Win32

@echo off

:: Initialize the returned value to 0 (all succesfully)
set errorstatus=0

:: Get the current vesion of FASTRPC
call %EPROSIMADIR%\scripts\common_pack_functions.bat :getVersionFromCPP VERSIONFASTRPC ..\..\include\fastrpc\fastrpc_version.h
if not %errorstatus%==0 goto :EOF

:: Set environment for FASTRPC
call %EPROSIMADIR%\scripts\common_dds_functions.bat :setRTIversion ndds.5.1.0

:: Set environment Win32
call %EPROSIMADIR%\scripts\common_dds_functions.bat :setRTItarget i86Win32VS2010

:: Release DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="RPCDDSReleaseDLL" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="RPCDDSReleaseDLL" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="RPCDDSDebugDLL" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="RPCDDSDebugDLL" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Release Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="RPCDDSRelease" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="RPCDDSRelease" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="RPCDDSDebug" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="RPCDDSDebug" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

call %EPROSIMADIR%\scripts\common_dds_functions.bat :restoreRTItarget

:: Set environment x64
call %EPROSIMADIR%\scripts\common_dds_functions.bat :setRTItarget x64Win64VS2010


:: Release DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="RPCDDSReleaseDLL" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="RPCDDSReleaseDLL" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="RPCDDSDebugDLL" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="RPCDDSDebugDLL" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Release Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="RPCDDSRelease" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="RPCDDSRelease" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="RPCDDSDebug" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="RPCDDSDebug" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:restore
:: Restore environment for FASTRPC
call %EPROSIMADIR%\scripts\common_dds_functions.bat :restoreRTItarget

call %EPROSIMADIR%\scripts\common_dds_functions.bat :restoreRTIversion

goto :EOF
