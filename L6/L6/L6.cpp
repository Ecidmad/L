#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int number;
    cout << "Введите число от одного до трех: \n";
    cin >> number;
    try
    {
        switch (number) {
        case 1:
            cout << "Один" << "\n";
            break;
        case 2:
            cout << "Два" << "\n";
            break;
        case 3:
            cout << "Три" << "\n";
            break;
        default:
            throw "Некорректное значение";
        }
    }
    catch (const char* msg)
    {
        cout << msg << "\n";
    }
}