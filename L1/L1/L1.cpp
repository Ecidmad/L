﻿#include <iostream> // Комментарии каждой строки
int main() // Чем меньше комментариев, тем лучше
{ // Поэтому были сделаны бесполезные комментарии
    setlocale(LC_ALL, "Russian"); // Вот такие
    std::cout << "First string\n"; // 1
    std::cout << "Первая строка" << "\n" << "Вторая строка \n"; // 2
    std::cout << "Спецсимволы " << "\"\\\""; // 3
} // 4