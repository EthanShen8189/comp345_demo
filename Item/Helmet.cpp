//
// Created by Ethan Shen on 11/30/2016.
//


#include "Helmet.h"

Helmet::Helmet() {
    srand(time(NULL));
    this->enchantBonus = rand() % 5 +1;
    int typeFlag = rand() % 3 +1;
    switch(typeFlag){
        case 1:
            this->enchantType = "Intelligence";
            break;
        case 2:
            this->enchantType = "Wisdom";
            break;
        case 3:
            this->enchantType = "Armor Class";
            break;
        default:
            cout<< "Helmet creation failed!" << endl;
    }
}

Helmet::Helmet(int bonus, string type) {
    this->enchantBonus = bonus;
    this->enchantType = type;
}

string Helmet::getClassAsText() {
    return "Helmet";
}

int Helmet::getEnchantmentBonus() {
    return enchantBonus;
}

void Helmet::setEnchantBonus(int enchantBonus) {
    Helmet::enchantBonus = enchantBonus;
}

string Helmet::getEnchantmentType() {
    return enchantType;
}

void Helmet::setEnchantType(const string &enchantType) {
    Helmet::enchantType = enchantType;
}
