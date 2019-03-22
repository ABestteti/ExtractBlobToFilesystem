@echo off
Rem #
Rem # pcmake.bat
Rem #
Rem #  Copyright (c) Oracle Corporation 2000, 2008. All Rights Reserved.
Rem #
Rem #    NAME
Rem #      pcmake.bat - batch file for building PRO*C demos. 
Rem #
Rem #    DESCRIPTION
Rem #      Using this batch file to build PRO*C demos,
Rem #      e.g.  To build procdemo, 
Rem #            At command prompt where procdemo.pc is located, 
Rem #            type: % pcmake procdemo
Rem #     
Rem #      The purpose of this batch file is to illustrate how PRO*C
Rem #      applications can be built at the command prompt.  In order to
Rem #      use this batch file, installation of Microsoft Visual Studio 
Rem #      is required.   PRO*C command line options and linker options
Rem #      vary depending on your application.   This batch file
Rem #      is just an example for your reference.
Rem #
Rem #      For environment setup, please read the note below.
Rem #
Rem #    NOTES
Rem #       Environment variables must be set before using this batch file.
Rem #       They are as follows:
Rem #       1. VCINSTALLDIR     : This variable is defined by running a batch
Rem #                        file, vcvars32.bat, in Microsoft Visual Studio 
Rem #                        directory. You can find it using Windows Explorer.
Rem #
call "C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat" x64
Rem # Please set this variable to your instant client installation directory.
Rem set ICHOME=..\..
set ICHOME=C:\Oracle\ora11gr2

set ORACLE_HOME=C:\Oracle\ora11gr2
set PATH=%ORACLE_HOME%\sdk;%PATH%

Rem Environment Check:
if ("%VCINSTALLDIR%") == ("") goto vcinstalldir_error

Rem -------------------------------------
Rem INSTANT CLIENT DIRECTORY PATHS
Rem -------------------------------------
set ICINCHOME=%ICHOME%\precomp\public
set ICLIBHOME=%ICHOME%\precomp\LIB\msvc
set PCSCFG=%ICHOME%\precomp\admin\pcscfg.cfg
set PROC=%ORACLE_HOME%\bin\proc.exe
Rem -------------------------------------


set pcfile=%1

if (%pcfile%) == () goto usage

@echo on
echo %pcfile%
%PROC% parse=full unsafe_null=yes mode=oracle DBMS=V8 iname=%pcfile%.pc config="%PCSCFG%" include="%ICINCHOME%" include="." include="%VCINSTALLDIR%\include" include="%VCINSTALLDIR%\PlatformSDK\include"
@echo off
Rem goto clink
goto end


:clink
cl -I%ICINCHOME% -I. -I"%VCINSTALLDIR%\include" -I"%VCINSTALLDIR%\PlatformSDK\include" -D_DLL -D_MT %1.c /link /LIBPATH:%ICLIBHOME% %SQLLIB_lib% oci.lib kernel32.lib msvcrt.lib /nod:libc
goto end


:usage
echo .
echo usage pcmake filename.pc [ i.e. pcmake procdemo ]
echo .
goto end


:vcinstalldir_error 
echo .
echo Environment variable VCINSTALLDIR must be set before running this batch file.
echo Please run vcvars32.bat from MS Visual Studio directory.
echo .
goto end

:end
