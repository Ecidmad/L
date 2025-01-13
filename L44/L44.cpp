#include <iostream>
using namespace std;
#include "Weapon.h";
#include "Characteristic.h";
#include "MyMath.h";
int MyMath::K = 0;
int main()
{
    setlocale(LC_ALL, "Russian");
    /* 
    Weapon Bow("Bow", 10, 2);
    Weapon Sword;
    Weapon Spear("Spear", 25, 6);
    Weapon* Shotgun = new Weapon("Shotgun", 220, 6);
    Bow.maxweight(12);
    Spear.sumweight(Bow);
    Spear.sumweight(30);
    Bow.setDamage(30);
    cout << Bow.getDamage() << "\n";
    Characteristic hand(5);
    cout << hand.GetDamage(Shotgun) << "\n";
    delete Shotgun;
    cout << MyMath::Add(6, 4) << "\n";
    cout << MyMath::Div(8, 4) << "\n";
    cout << MyMath::Mult(6, 4) << "\n";
    cout << MyMath::Sub(6, 4) << "\n";
    cout << MyMath::K << "\n"; 
    */
    Weapon::type(Direction::ONEHANDED);
    Weapon::type(Direction::TWOHANDED);
    Weapon::type(Direction::BOW);
    Weapon::type(Direction::CROSSBOW);
    Weapon Spear("Spear", 10, 2, Direction::TWOHANDED);
    cout << "Hi";
}