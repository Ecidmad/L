#include <iostream>
using std::string;
class Weapon
{
public:
    string name;
    float damage;
    int weight;
    Weapon(string name, float damage, int weight) : name(name), damage(damage), weight(weight) {}
    Weapon() :Weapon("Weapon", 1, 1){}
};
int main()
{
    Weapon Bow("Bow", 10, 2);
    std::cout << Bow.name << Bow.damage << Bow.weight << "\n";
    Weapon Sword;
    std::cout << Sword.name << Sword.damage << Sword.weight << "\n";
}