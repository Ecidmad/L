#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    string userInput;
    string got;
    cout << "Введите строку: \n";
    getline(cin, userInput);
    cout << userInput << "\n";
    if (userInput.length() >= 4)
    {
        cout << "Подстрока с 2-го по 4-й символ: " << userInput.substr(1, 3) << "\n";
    }
    else
    {
        cout << "В строке слишком мало символов, нужно не менее 4 символов.\n";
    }
    int index = userInput.find("a");
    if (index == -1) cout << "Строка не содержит символ 'a'.\n";
    else cout << "Символ 'a' стоит на " << index+1 << " месте\n";
}