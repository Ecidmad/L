#include "weapon.h"
#include <iostream>
using std::string;
Weapon::Weapon(string name, float damage, int weight) : name(name), damage(damage), weight(weight) {}
Weapon::Weapon() :Weapon("Weapon", 1, 1) {}
Weapon::~Weapon()
{
    std::cout << name << " " << damage << " " << weight << " уничтожается \n";
}
bool Weapon::maxweight(int x)
{
    if (x > weight)
    {
        std::cout << "true\n";
        return true;
    }
    else
    {
        std::cout << "false\n";
        return false;
    }
}
int Weapon::sumweight(Weapon y)
{
    std::cout << weight + y.weight << "\n";
    return weight + y.weight;
}
int Weapon::sumweight(int x)
{
    std::cout << weight + x << "\n";
    return weight + x;
}