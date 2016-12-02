//
// Created by Ethan Shen on 11/30/2016.
//

#include "Ring.h"

Ring::Ring() {
    srand(time(NULL));
    this->enchantBonus = rand() % 5 +1;
    int typeFlag = rand() % 5 +1;
    switch(typeFlag){
        case 1:
            this->enchantType ="Armor Class";
            break;
        case 2:
            this->enchantType ="Strength";
            break;
        case 3:
            this->enchantType ="Constitution";
            break;
        case 4:
            this->enchantType ="Wisdom";
            break;
        case 5:
            this->enchantType ="Charisma";
            break;
        default:
            cout<< "Ring creation failed!" << endl;
    }
}

Ring::Ring(int bonus, string type) {
    this->enchantBonus = bonus;
    this->enchantType = type;
}

string Ring::getClassAsText() {
    return "Ring";
}

int Ring::getEnchantmentBonus() {
    return enchantBonus;
}

void Ring::setEnchantBonus(int enchantBonus) {
    Ring::enchantBonus = enchantBonus;
}

string Ring::getEnchantmentType() {
    return enchantType;
}

void Ring::setEnchantType(const string &enchantType) {
    Ring::enchantType = enchantType;
}
