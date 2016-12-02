//
// Created by Ethan Shen on 2016-09-22.
//

#include "CharacterEquipment.h"
Item CharacterEquipment::equipHelmet(Item *helmet) {
    Item *temp = new Helmet(this->items[0].getEnchantmentBonus(), this->items[0].getEnchantmentType());
    this->items[0] = *helmet;
    return *helmet = *temp;
}

Item CharacterEquipment::equipArmor(Item *armor) {
    Armor *temp = new Armor(this->items[1].getEnchantmentBonus(), this->items[1].getEnchantmentType());
    this->items[1] = *armor;
    return *armor = *temp;
}

Item CharacterEquipment::equipShield(Item *shield) {
    Shield *temp = new Shield(this->items[2].getEnchantmentBonus(), this->items[2].getEnchantmentType());
    this->items[2] = *shield;
    return *shield = *temp;
}

Item CharacterEquipment::equipRing(Item *ring) {
    Ring *temp = new Ring(this->items[3].getEnchantmentBonus(), this->items[3].getEnchantmentType());
    this->items[3] = *ring;
    return *ring = *temp;
}

Item CharacterEquipment::equipBelt(Item *belt) {
    Belt *temp = new Belt(this->items[4].getEnchantmentBonus(), this->items[4].getEnchantmentType());
    this->items[4] = *belt;
    return *belt = *temp;
}

Item CharacterEquipment::equipBoots(Item *boots) {
    Boots *temp = new Boots(this->items[5].getEnchantmentBonus(), this->items[5].getEnchantmentType());
    this->items[5] = *boots;
    return *boots = *temp;
}

Item CharacterEquipment::equipWeapon(Item *weapon) {
    Weapon *temp = new Weapon(this->items[6].getEnchantmentBonus(), this->items[6].getEnchantmentType());
    this->items[6] = *weapon;
    return *weapon = *temp;
}

CharacterEquipment::~CharacterEquipment() {
    delete this;
}

CharacterEquipment::CharacterEquipment() {}

void CharacterEquipment::printAllEquipment() {
    for(Item i: items){
        cout<<i.getClassAsText()<<"- Enchantment Type: "<<i.getEnchantmentType()
            <<" Enchantment Bonus: "<<i.getEnchantmentBonus()<< endl;
    }
}

vector<Item> CharacterEquipment::getItems()  {
    return items;
}
