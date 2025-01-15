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
    string text = "Пример текста с e-mail адресами: john.doe@examplecom, alice.smith@company.org и support@mydomain.net.";
    regex emailRegex("^[a-zA-Z0-9_][a-zA-Z0-9_\.-]*[a-zA-Z0-9_]@([a-z0-9]+[a-z0-9_-]*[a-z0-9]\.)+[a-z0-9]{2,}$", regex_constants::icase);
    smatch matches;
    while (regex_search(text, matches, emailRegex))
    {
        cout << matches[1] << "\n";
    }
}