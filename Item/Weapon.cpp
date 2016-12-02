//
// Created by Ethan Shen on 11/30/2016.
//

#include "Weapon.h"
Weapon::Weapon() {
    srand(time(NULL));
    this->enchantBonus = (rand() % 5 +1);
    int typeFlag = rand() % 2 +1;
    switch(typeFlag){
        case 1:
            this->enchantType = ("Attack Bonus");
            break;
        case 2:
            this->enchantType = ("Damage Bonus");
            break;
        default:
            cout<< "Weapon creation failed!" << endl;
    }
}

Weapon::Weapon(int bonus, string type) {
    this->enchantBonus = bonus;
    this->enchantType = type;

}

string Weapon::getClassAsText() {
    return "Weapon";
}

int Weapon::getEnchantmentBonus() {
    return enchantBonus;
}

void Weapon::setEnchantBonus(int enchantBonus) {
    Weapon::enchantBonus = enchantBonus;
}

string Weapon::getEnchantmentType() {
    return enchantType;
}

void Weapon::setEnchantType(const string &enchantType) {
    Weapon::enchantType = enchantType;
}
