#pragma once
#include "Weapon.h";
#include <iostream>;
using namespace std;
class Characteristic
{
public:
	float strenght;
	Characteristic(float);
	Characteristic();
	float GetDamage(Weapon* m);
};

