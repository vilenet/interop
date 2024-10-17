Compilation
Here is an example of a command you might use to compile the program (MinGW, Windows):

g++ -o run_python.exe main.cpp -IC:/msys64/mingw64/include/python3.11 -LC:/msys64/mingw64/lib -lpython3.11


Issue: 
If you encounter the following message during program execution:

"Could not find platform dependent libraries <exec_prefix>"

This warning indicates that the Python interpreter cannot find some standard libraries required for proper execution. This typically happens when the path to the Python libraries is not correctly configured.

Solution:
To resolve this issue, you need to specify the path to the Python libraries using environment variables like PYTHONHOME or PYTHONPATH, which tell the interpreter where the standard libraries are located.

Solution 1: Setting Environment Variables via CMD
Before running the executable, set the environment variables in the Command Prompt (CMD) like this:

set PYTHONHOME=C:\msys64\mingw64
set PYTHONPATH=C:\msys64\mingw64\lib
run_python.exe


Solution 2:  Setting Environment Variables in Code

1. Example for Windows:

#include <windows.h>  // For SetEnvironmentVariable
#include <Python.h>
...
int main() {
    SetEnvironmentVariable("PYTHONHOME", "C:\\msys64\\mingw64");
    SetEnvironmentVariable("PYTHONPATH", "C:\\msys64\\mingw64\\lib");

    Py_Initialize();
    PyRun_SimpleString("print('Hello from Python!')");
    Py_Finalize();
...

2. Example for POSIX Systems:

#include <cstdlib>  // For setenv
#include <Python.h>
...
int main() {
    setenv("PYTHONHOME", "/usr/local", 1);
    setenv("PYTHONPATH", "/usr/local/lib/python3.11", 1);

    Py_Initialize();
    PyRun_SimpleString("print('Hello from Python!')");
    Py_Finalize();
...

