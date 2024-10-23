// Calling python code from C++ example
#include <Python.h>
#include <windows.h>
#include <iostream>

int main()
{
    Py_Initialize();

    PyRun_SimpleString("print('Hello from Python')");

    Py_Finalize();

    return 0;
}