#pragma once
#include <iostream>
using namespace std;
class Weapon
{
    friend class Characteristic;
private:
    string name;
    float damage;
    int weight;
public:
    Weapon(string, float, int);
    Weapon();
    ~Weapon();
    bool maxweight(int);
    int sumweight(Weapon);
    int sumweight(int);
    string getName();
    float getDamage();
    int getWeight();
    void setDamage(float damage);

};