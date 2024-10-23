Interop with the Python/C API


Set python path to tasks.json in "args":

"-IC:/Users/vilen/AppData/Local/Programs/Python/Python313/include", 
"-LC:/Users/vilen/AppData/Local/Programs/Python/Python313/libs",   
"-lpython313" 


Set python path to c_cpp_properties.json in "configurations" -> "includePath":

"C:/Users/vilen/AppData/Local/Programs/Python/Python313/include"


Compilation
Here is an example of a command you might use to compile the program (MinGW, Windows):

g++ -o run_python.exe main.cpp -IC:/Users/vilen/AppData/Local/Programs/Python/Python313/include -LC:/Users/vilen/AppData/Local/Programs/Python/Python313/libs -lpython313
