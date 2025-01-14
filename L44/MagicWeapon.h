#pragma once
#include "Weapon.h"
class MagicWeapon:
    public Weapon
{
private:
    float bonusDamage;
public:
    MagicWeapon(string name, float damage, int weight, Direction group, float bonusDamage);
    MagicWeapon();
    ~MagicWeapon();
    float getBonusDamage();
    float getDamage() override;
    friend bool operator<(MagicWeapon& w, Weapon& w2);
    friend bool operator>(MagicWeapon& w, Weapon& w2);
    friend bool operator<(MagicWeapon& w, MagicWeapon& w2);
    friend bool operator>(MagicWeapon& w, MagicWeapon& w2);
};