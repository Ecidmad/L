#include <iostream>
int main()
{
    setlocale(LC_ALL, "Russian");
    float x;
    float y;
    short i;
    std::cout << "Введите число: ";
    std::cin >> x;
    std::cout << "Введите еще одно число: ";
    std::cin >> y;
    std::cout << (x + y) / 2 << "\n";
    std::cin >> i;
    if (i == 1) 
    {
        std::string z;
        std::cout << "Введите знак операции над числами: ";
        std::cin >> z;
        if (z == "-") 
        { // Warning!
            std::cout << x - y << "\n";
        }
        if (z == "+") {
            std::cout << x + y << "\n";
        }
        if (z == "*") {
            std::cout << x * y << "\n";
        }
        if (z == "/") {
            std::cout << x / y << "\n";
        } // Warning!
    }
    else 
    {
        int z;
        std::cout << "Введите номер операции над числами: \n 1) - \n 2) + \n 3) * \n 4) / \n";
        std::cin >> z;
        switch (z) 
        {
            case 1:
                std::cout << x - y << "\n";
                break;
            case 2:
                std::cout << x + y << "\n";
                break;
            case 3:
                std::cout << x * y << "\n";
                break;
            case 4:
                std::cout << x / y << "\n";
                break;
            default:
                std::cout << "Этот символ не подходит\n";
        }
    }
}