#include <iostream>
int main()
{
    setlocale(LC_ALL, "Russian");
    int x = 150;
    double y = 15.933f;
    short z = 250;
    std::cout << " x = " << x << "\n";
    std::cout << " y = " << y << "\n";
    std::cout << " z = " << z << "\n";
    short day = 6;
    std::string month = "Мая";
    short year = 2005;
    std::cout << "Моя дата рождения: " << day << " " << month << " " << year << " года\n";
    const double Num = 2.3f;
    const std::string Str = "WINDOWS";
    std::cout << Num << " " << Str << "\n";
}