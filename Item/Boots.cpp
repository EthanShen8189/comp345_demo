//
// Created by Ethan Shen on 11/30/2016.
//

#include "Boots.h"
Boots::Boots() {
    srand(time(NULL));
    this->enchantBonus = rand() % 5 +1;
    int typeFlag = rand() % 2 +1;
    switch(typeFlag){
        case 1:
            this->enchantType = "Armor Class";
            break;
        case 2:
            this->enchantType = "Dexterity";
            break;
        default:
            cout<< "Boots creation failed!" << endl;
    }
}

Boots::Boots(int bonus, string type) {
    this->enchantBonus = bonus;
    this->enchantType = type;
}

string Boots::getClassAsText() {
    return "Boots";
}

int Boots::getEnchantmentBonus()  {
    return enchantBonus;
}

void Boots::setEnchantBonus(int enchantBonus) {
    Boots::enchantBonus = enchantBonus;
}

string Boots::getEnchantmentType() {
    return enchantType;
}

void Boots::setEnchantType(const string &enchantType) {
    Boots::enchantType = enchantType;
}
