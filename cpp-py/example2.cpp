// Example: Calling a Python function and passing parameters
#include <Python.h>
#include <iostream>

int main()
{
    Py_Initialize();

    PyRun_SimpleString(R"(
def add_numbers(a, b):
    return a + b
)");

    PyObject* mainModule = PyImport_AddModule("__main__");
    PyObject* globalDict = PyModule_GetDict(mainModule);

    PyObject* pythonFunc = PyDict_GetItemString(globalDict, "add_numbers");

    if (pythonFunc && PyCallable_Check(pythonFunc)) {
        PyObject* args = PyTuple_Pack(2, PyLong_FromLong(10), PyLong_FromLong(20));

        PyObject* result = PyObject_CallObject(pythonFunc, args);

        if (result) {
            long sum = PyLong_AsLong(result);
            std::cout << "Result from Python: " << sum << std::endl;
            Py_DECREF(result);
        }

        Py_DECREF(args);
    } else {
        std::cerr << "Failed to find Python function!" << std::endl;
    }

    Py_Finalize();
    return 0;
}
