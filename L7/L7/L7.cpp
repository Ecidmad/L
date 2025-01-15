#include <iostream>
#include <string>
#include <regex>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    string userName;
    cout << "Введите Ваше имя: \n";
    getline(cin, userName);
    regex nameRegex("^[A-Z][a-zA-Z]{1,31}$");
    if (regex_match(userName, nameRegex))
    {
        cout << "Имя введено корректно.\n";
    }
    else
    {
        cout << "Имя некорректно! Имя должно быть от 2 до 32 символов и начинаться с заглавной буквы.\n";
    }
}