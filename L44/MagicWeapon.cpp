#include "MagicWeapon.h"
MagicWeapon::MagicWeapon(string name, float damage, int weight, Direction group, float bonusDamage) : Weapon(name, damage, weight, group)
{
	this->bonusDamage =bonusDamage;
}
MagicWeapon::MagicWeapon() : MagicWeapon("Scepter", 14, 3, TWOHANDED, 3) {}
MagicWeapon::~MagicWeapon()
{
	cout << "Оружие исчезает без следа\n";
}
float MagicWeapon::getBonusDamage()
{
	return bonusDamage;
}
float MagicWeapon::getDamage()
{
	return Weapon::getDamage()+bonusDamage;
}
void MagicWeapon::attack(Weapon& m)
{
	cout << "Атакуем магическим оружием \n";
}
bool operator<(MagicWeapon& w, Weapon& w2) 
{
	return w.getDamage() < w2.getDamage();
}
bool operator>(MagicWeapon& w, Weapon& w2) 
{
	return w.getDamage() > w2.getDamage();
}
bool operator<(MagicWeapon& w, MagicWeapon& w2)
{
	return w.getDamage() < w2.getDamage();
}
bool operator>(MagicWeapon& w, MagicWeapon& w2)
{
	return operator<(w, w2);
}