//
// Created by Ethan Shen on 11/30/2016.
//

#ifndef COMP345_GROUPPROJECT_SHIELD_H
#define COMP345_GROUPPROJECT_SHIELD_H

#include <cstdlib>
#include <ctime>
#include "Item.h"

class Shield : public Item{
private:
    int enchantBonus;
    string enchantType;
public:
    Shield();
    Shield(int bonus, string type);
    int getEnchantmentBonus();
    void setEnchantBonus(int enchantBonus);
    string getClassAsText();
    string getEnchantmentType();
    void setEnchantType(const string &enchantType);
};


#endif //COMP345_GROUPPROJECT_SHIELD_H
