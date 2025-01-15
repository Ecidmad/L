#include <iostream>
#include "MyException.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    //int number;
    //cout << "Введите число от одного до трех: \n";
    //cin >> number;
    //try
    //{
    //    switch (number) {
    //    case 1:
    //        cout << "Один" << "\n";
    //        break;
    //    case 2:
    //        cout << "Два" << "\n";
    //        break;
    //    case 3:
    //        cout << "Три" << "\n";
    //        break;
    //    default:
    //        throw "Некорректное значение";
    //    }
    //}
    //catch (const char* msg)
    //{
    //    cout << msg << "\n";
    //}
    //int year;
    //cout << "Введите год своего рождения: \n";
    //cin >> year;
    //try
    //{
    //    if (year < 0) throw "Вы ввели число меньше нуля\n";
    //    else if (year > 2025) throw "Вы еще не родились\n";
    //    else if (year < 1850) throw "Что-то не верится...\n";
    //    else cout << "Спасибо!\n";
    //}
    //catch(const char* msg)
    //{
    //    cout << msg << "\n";
    //}
    try
    {
        int birthYear;
        cout << "Введите год вашего рождения: ";
        cin >> birthYear;
        if (birthYear < 0)
        {
            throw MyException(MyError::belowZero);
        }
        else if (birthYear == 0)
        {
            throw MyException(MyError::zero);
        }
        else if (birthYear < 1850)
        {
            throw MyException(MyError::below1850);
        }
        else if (birthYear > 2025)
        {
            throw MyException(MyError::future);
        }
        else
        {
            cout << "Спасибо!\n";
        }
    }
    catch (const MyException& e)
    {
        cout << "MyException: " << e.what();
    }
}