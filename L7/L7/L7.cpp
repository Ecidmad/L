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
    cout << userInput;
}