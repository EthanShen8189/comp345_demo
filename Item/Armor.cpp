//
// Created by Ethan Shen on 11/30/2016.
//

#include "Armor.h"

Armor::Armor() {
    srand(time(NULL));
    this->enchantBonus = rand() % 5 +1;
    this->enchantType = "Armor class";
}

Armor::Armor(int bonus, string type) {
    this->enchantBonus = bonus;
    this->enchantType = type;
}

string Armor::getClassAsText() {
    return "Armor";
}

int Armor::getEnchantmentBonus() {
    return enchantBonus;
}

void Armor::setEnchantBonus(int enchantBonus) {
    Armor::enchantBonus = enchantBonus;
}

string Armor::getEnchantmentType()  {
    return enchantType;
}

void Armor::setEnchantType(const string &enchantType) {
    Armor::enchantType = enchantType;
}

