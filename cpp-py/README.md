Compilation
Here is an example of a command you might use to compile the program (MinGW, Windows):

g++ -o run_python.exe main.cpp -IC:/Users/vilen/AppData/Local/Programs/Python/Python313/include -LC:/Users/vilen/AppData/Local/Programs/Python/Python313/libs -lpython313



Для того чтобы настроить Visual Studio Code (VS Code) так, чтобы вы могли компилировать и запускать программу с помощью кнопки, вам нужно создать задачу (task) и конфигурацию запуска (launch) в VS Code. Вот шаги для настройки:

1 Создание задачи для компиляции программы:
    1 "Ctrl + Shift + P"   введите "Tasks: Configure Task"

    2 Выберите "Create tasks.json file from template"   и далее выберите "Others". 
    
    tasks.json: