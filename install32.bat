@echo off

set PLUGINDIR=%~dp0\release\x32\plugins
mkdir %PLUGINDIR%
copy bin\x32\x64dbg-python.dll %PLUGINDIR%\x64dbg_python.dp32

@cd swig
call clean.bat
call "%~dp0\setenv.bat"
call %VCVARS% x86
"%PYTHON27X86%\python.exe" setup.py  install --install-lib="%PLUGINDIR%"
@cd ..

@echo on