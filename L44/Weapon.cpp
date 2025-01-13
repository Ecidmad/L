#include "Weapon.h"
#include <iostream>
using namespace std;
Weapon::Weapon(string name, float damage, int weight, Direction group) : name(name), damage(damage), weight(weight), group(group){}
Weapon::Weapon() :Weapon("Weapon", 1, 1, Direction::ONEHANDED) {}
Weapon::~Weapon()
{
    std::cout << name << " " << damage << " " << weight << " уничтожается \n";
}
void Weapon::printGroup(Direction d)
{
    if (d == Direction::ONEHANDED) std::cout << "Одноручное";
    else if (d == Direction::TWOHANDED) std::cout << "Двуручное";
    else if (d == Direction::BOW) std::cout << "Лук";
    else if (d == Direction::CROSSBOW) std::cout << "Арбалет";
    std::cout << "\n";
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
string Weapon::getName()
{
    return string(name);
}

float Weapon::getDamage()
{
    return damage;
}

int Weapon::getWeight()
{
    return weight;
}
Direction Weapon::getGroup()
{
    return group;
}
void Weapon::setDamage(float damage)
{
    if (damage < 0) cout << "Внимание, урон меньше нуля! \n";
    else this->damage = damage;
}
