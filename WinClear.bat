@echo off
del *.exe
del *.sdf
del *.suo

del Source\*.pdb

rd /s /q "Source\vcxproj\char-server"
rd /s /q "Source\vcxproj\login-server"
rd /s /q "Source\vcxproj\map-server"

exit 