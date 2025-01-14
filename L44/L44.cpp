#include <iostream>
using namespace std;
#include "Weapon.h";
#include "Characteristic.h";
#include "MyMath.h";
#include "MagicWeapon.h"
int MyMath::K = 0;

struct Player
{
    int id;
    string login;
    string password;
    void print(Player& player)
    {
        std::cout << "Id: " << player.id << "\n";
        std::cout << "Login: " << player.login << "\n";
        std::cout << "Password: " << player.password << "\n";
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    MagicWeapon band("Band", 7, 1, ONEHANDED, 2);
    band.MagicWeapon::attack(band);
}