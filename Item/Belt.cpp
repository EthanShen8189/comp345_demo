//
// Created by Ethan Shen on 11/30/2016.
//

#include "Belt.h"

Belt::Belt() {
    srand(time(NULL));
    this->enchantBonus = rand() % 5 +1;
    int typeFlag = rand() % 2 +1;
    switch(typeFlag){
        case 1:
            this->enchantType = "Constitution";
            break;
        case 2:
            this->enchantType = "Strength";
            break;
        default:
            cout<< "Belt creation failed!" << endl;
    }
}

Belt::Belt(int bonus, string type) {
    this->enchantBonus = bonus;
    this->enchantType = type;
}

string Belt::getClassAsText() {
    return "Belt";
}

int Belt::getEnchantmentBonus() {
    return enchantBonus;
}

void Belt::setEnchantBonus(int enchantBonus) {
    Belt::enchantBonus = enchantBonus;
}

string Belt::getEnchantmentType()  {
    return enchantType;
}

void Belt::setEnchantType(const string &enchantType) {
    Belt::enchantType = enchantType;
}
