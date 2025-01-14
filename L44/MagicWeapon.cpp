#include "MagicWeapon.h"
MagicWeapon::MagicWeapon(string name, float damage, int weight, Direction group, float bonusDamage) : Weapon(name, damage, weight, group)
{
	this->bonusDamage =bonusDamage;
}