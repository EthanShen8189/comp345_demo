//
// Created by Ethan Shen on 11/30/2016.
//

#ifndef COMP345_GROUPPROJECT_ARMOR_H
#define COMP345_GROUPPROJECT_ARMOR_H

#include <cstdlib>
#include <ctime>
#include "Item.h"

class Armor : public Item{
private:
    int enchantBonus;
    string enchantType;
public:
    Armor(){}
    Armor(int bonus, string type);
    int getEnchantmentBonus();
    void setEnchantBonus(int enchantBonus);
    string getEnchantmentType();
    void setEnchantType(const string &enchantType);
    string getClassAsText();
};


#endif //COMP345_GROUPPROJECT_ARMOR_H
