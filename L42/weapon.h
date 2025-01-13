#pragma once
#include <iostream>
using std::string;
class Weapon
{
public:
    string name;
    float damage;
    int weight;
    Weapon(string, float, int);
    Weapon();
    ~Weapon();
    bool maxweight(int);
    int sumweight(Weapon);
    int sumweight(int);
};