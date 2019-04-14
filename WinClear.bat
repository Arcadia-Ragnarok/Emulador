@echo off
del *.exe
del *.sdf
del *.suo

del Build\output\*.pdb

rd /s /q "Build\Output"

exit 