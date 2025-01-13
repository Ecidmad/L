#include <iostream>
using std::string;
#include "weapon.h";
int main()
{
    setlocale(LC_ALL, "Russian");
    Weapon Bow("Bow", 10, 2);
    std::cout << Bow.name << " " << Bow.damage << " " << Bow.weight << "\n";
    Weapon Sword;
    std::cout << Sword.name << " " << Sword.damage << " " << Sword.weight << "\n";
    Weapon Spear("Spear", 25, 6);
    std::cout << Spear.name << " " << Spear.damage << " " << Spear.weight << "\n";
    Weapon* Shotgun = new Weapon("Shotgun", 220, 6);
    delete Shotgun;
    Bow.maxweight(12);
    Spear.sumweight(Bow);
    Spear.sumweight(30);
}