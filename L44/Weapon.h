#pragma once
#include <iostream>
using namespace std;
enum Direction {
    ONEHANDED,
    TWOHANDED,
    BOW,
    CROSSBOW
};
class Weapon
{
    friend class Characteristic;
private:
    string name;
    float damage;
    int weight;
    Direction type2;
public:
    static void type(Direction);
    Weapon(string, float, int, Direction);
    Weapon();
    ~Weapon();
    bool maxweight(int);
    int sumweight(Weapon);
    int sumweight(int);
    string getName();
    float getDamage();
    int getWeight();
    Direction getType();
    void setDamage(float damage);

};