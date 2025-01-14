#pragma once
#include "Weapon.h"
class SingleUseWeapon:
	public Weapon
{
private:
	bool used;
public:
	SingleUseWeapon(string name, float damage, int weight, Direction group, bool used);
	SingleUseWeapon();
	~SingleUseWeapon();
	void setUsed(bool value);
	bool isUsed() const;
	void attack(Weapon& m) override;
};