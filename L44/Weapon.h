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
    Direction group;
public:
    static void printGroup(Direction);
    Weapon(string, float, int, Direction);
    Weapon();
    ~Weapon();
    bool maxweight(int);
    int sumweight(Weapon);
    int sumweight(int);
    string getName();
    virtual float getDamage();
    int getWeight();
    Direction getGroup();
    void setDamage(float damage);
};