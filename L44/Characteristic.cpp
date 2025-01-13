#include "Characteristic.h";

Characteristic::Characteristic(float strenght): strenght(strenght){}
Characteristic::Characteristic():Characteristic(0){}

float Characteristic::GetDamage(Weapon* m)
{
	return m->damage + strenght;
}
