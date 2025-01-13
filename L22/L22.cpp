#include <iostream>
int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    int s = 0;
    int i = 1;
    while (true)
    {
        std::cout << "Введите натуральное число: ";
        std::cin >> x;
        if (x > 0)
        {
            break;
        }
    }
    while(i<=x)
    {
        if (i == 1)
        {
            std::cout << i;
        }
        else 
        {
            std::cout << " + " << i;
        }
        s = s + i;
        i++;
    }
    i = 0;
    std::cout << " = " << s << "\n";
    int array[] = { 1, 2, 3, 5, 6, 7, 8, 9, 10, 4 };
    for (int r : array) 
    {
        std::cout << r << " ";
    }
    std::cout << "\n";
    for (int r : array) 
    {
        if (i % 2 == 0) 
        {
        std::cout << r << " ";
        }
        i++;
    }
    std::cout << "\n";
    i = 0;
    s = 0;
    for (int r : array) 
    {
        if (i % 2 == 1) 
        {
            s = s + r;
        }
        i++;
    }
    std::cout << s;
}