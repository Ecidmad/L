#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    string userName;
    cout << "Введите Ваше имя: \n";
    getline(cin, userName);
}