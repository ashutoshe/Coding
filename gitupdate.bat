@echo off
set /p Input=Enter Commit Message : 

@echo on
git.exe add -A
git.exe commit -m "%Input%"
git.exe push

pause