#include "SingleUseWeapon.h"
SingleUseWeapon::SingleUseWeapon(string name, float damage, int weight, Direction group, bool used) : Weapon(name, damage, weight, group)
{
	this->used = used;
}
SingleUseWeapon::SingleUseWeapon() : SingleUseWeapon("Scepter", 14, 3, TWOHANDED, false) {}
SingleUseWeapon::~SingleUseWeapon() {}
void SingleUseWeapon::setUsed(bool value)
{
	used = value;
}
bool SingleUseWeapon::isUsed() const
{
	return used;
}
void SingleUseWeapon::attack(Weapon& m)
{
    if (used)
    {
        cout << "Оружие уже было использовано\n";
    }
    else
    {
        cout << "Атакуем одноразовым оружием\n";
        setUsed(true);
    }
}
