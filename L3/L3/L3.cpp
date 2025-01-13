#include <iostream>
int main()
{
    int x = 60;
    int* pointer;
    pointer = &x;
    std::cout << "pointer = " << pointer << "\n" << "*pointer = " << *pointer << "\n";
    *pointer = 1;
    std::cout << x << "\n";
    int j[2][2] = { {4,0},{1,2} };
    int f = sizeof(j) / sizeof(j[0]);
    int s = sizeof(j[0]) / sizeof(j[0][0]);
    int* e = j[0] + f * s - 1;
    for (int* q = j[0]; q <= e; q++) 
    {
        std::cout << *q << " ";
    }
    std::cout << "\n";
    int r = 5;
    int* const u = &r;
    std::cout << r << " " << u << " " << *u << "\n";
    *u = 100;
    std::cout << r << " " << u << " " << *u << "\n";
    r = 60;
    std::cout << r << " " << u << " " << *u << "\n";
}