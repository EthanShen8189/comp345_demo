//
// Created by Ethan Shen on 11/30/2016.
//

#ifndef COMP345_GROUPPROJECT_WEAPON_H
#define COMP345_GROUPPROJECT_WEAPON_H

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Item.h"

class Weapon: public Item{
private:
    int enchantBonus;
    string enchantType;
public:
    Weapon();
    Weapon(int bonus, string type);
    int getEnchantmentBonus();
    void setEnchantBonus(int enchantBonus);
    string getEnchantmentType();
    void setEnchantType(const string &enchantType);
    string getClassAsText();
};


#endif //COMP345_GROUPPROJECT_WEAPON_H
