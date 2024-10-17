// Calling python code from C++ example
#include <Python.h>
#include <windows.h>
#include <iostream>

int main()
{
    SetEnvironmentVariable("PYTHONHOME", "C:\\msys64\\mingw64");
    SetEnvironmentVariable("PYTHONPATH", "C:\\msys64\\mingw64\\lib");

    Py_Initialize();

    PyRun_SimpleString("print('Hello from Python')");

    Py_Finalize();

    return 0;
}