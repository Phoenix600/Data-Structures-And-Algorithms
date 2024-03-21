@echo off 

@echo Compiling Sources Files....
gcc Main.c lib/source/*.c -o HashingApplication.exe 

@echo Application Compiled....
@echo Running Application.... 
HashingApplication.exe  



pause
@echo done