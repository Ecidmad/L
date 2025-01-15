#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;
const double PI = 3.141592653589793;
int main()
{
    setlocale(LC_ALL, "");
    //double radius;
    //cout << "Введите радиус окружности: ";
    //cin >> radius;
    //double circumference = 2 * PI * radius;
    //cout << "Длина окружности: " << round(circumference * 1000) / 1000 << endl;
    string fileName = "output.txt";
    string userInput;
    while (true)
    {
        cout << "Введите строку (или команды read, erase, exit): ";
        getline(cin, userInput);
        if (userInput == "read")
        {
            ifstream file(fileName);
            if (file.is_open())
            {
                cout << "Содержимое файла:\n";
                string line;
                while (getline(file, line)) {
                    cout << line << endl;
                }
                file.close();
            }
            else
            {
                cout << "Файл пуст или отсутствует." << endl;
            }
        }
        else if (userInput == "erase")
        {
            ofstream file(fileName, ios::trunc);
            if (file.is_open())
            {
                cout << "Файл очищен." << endl;
                file.close();
            }
            else
            {
                cerr << "Ошибка при очистке файла." << endl;
            }
        }
        else if (userInput == "exit")
        {
            cout << "Завершение программы." << endl;
            break;
        }
        else
        {
            ofstream file(fileName, ios::app);
            if (file.is_open())
            {
                file << userInput << endl;
                file.close();
                cout << "Строка добавлена в файл." << endl;
            }
            else
            {
                cerr << "Ошибка при записи в файл." << endl;
            }
        }
    }
}