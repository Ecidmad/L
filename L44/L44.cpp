#include <iostream>
using namespace std;
#include "Weapon.h";
#include "Characteristic.h";
#include "MyMath.h";
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
    Weapon::printGroup(Direction::ONEHANDED);
    Weapon::printGroup(Direction::TWOHANDED);
    Weapon::printGroup(Direction::BOW);
    Weapon::printGroup(Direction::CROSSBOW);
    Weapon spear("Spear", 10, 2, Direction::TWOHANDED);
    Weapon::printGroup(spear.getGroup());
    Player player = {45323, "Jokagot", "Haropan"};
    player.print(player);
}