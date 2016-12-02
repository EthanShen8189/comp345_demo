//
// Created by Ethan Shen on 11/30/2016.
//


#include "Shield.h"

Shield::Shield() {
    srand(time(NULL));
    this->enchantBonus = (rand() % 5 +1);
    this->enchantType = ("Armor class");
}

Shield::Shield(int bonus, string type) {
    this->enchantBonus = bonus;
    this->enchantType = type;
}

string Shield::getClassAsText() {
    return "Shield";
}

int Shield::getEnchantmentBonus() {
    return enchantBonus;
}

string Shield::getEnchantmentType() {
    return enchantType;
}

void Shield::setEnchantType(const string &enchantType) {
    Shield::enchantType = enchantType;
}

void Shield::setEnchantBonus(int enchantBonus) {
    Shield::enchantBonus = enchantBonus;
}
