//
// Created by Ethan Shen on 2016-11-27.
//

#include "Fighter.h"

Fighter::Fighter() {
}

Fighter::Fighter(int level, int hitPoint, int armorClass, string type, vector<int> attackBonus, CharacterAttribute characterAttribute, CharacterEquipment characterEquipment) {
    this->level = level;
    this->hitPoint = hitPoint;
    this->armorClass = armorClass;
    this->type = type;
    this->attackBonus = attackBonus;
    this->characterAttribute = characterAttribute;
    this->characterEquipment = characterEquipment;
}

//! Implementation of the verification of a newly created Fighter
//! @return bool value, true of the fighter is valid (stats should be in the 3-18 range for a new fighter), false if invalid.
bool Fighter::isValidFighter() {
    const MIN = 3;
    const MAX = 18;

    return !((this->getCharacterAttribute().getCharisma() < MIN || this->getCharacterAttribute().getCharisma() > MAX) ||
             (this->getCharacterAttribute().getConstitution() < MIN || this->getCharacterAttribute().getConstitution() > MAX) ||
             (this->getCharacterAttribute().getDexterity() < MIN || this->getCharacterAttribute().getDexterity() > MAX) ||
             (this->getCharacterAttribute().getIntelligence() < MIN || this->getCharacterAttribute().getIntelligence() > MAX) ||
             (this->getCharacterAttribute().getStrength() < MIN || this->getCharacterAttribute().getStrength() > MAX) ||
             (this->getCharacterAttribute().getWisdom() < MIN || this->getCharacterAttribute().getWisdom() > MAX));
}

int Fighter::modifier(int dice, int bonus) {
    return dice += bonus;
}

int Fighter::getLevel() {
    return Fighter::level;
}

void Fighter::incrementLevel() {
    Fighter::level += 1;
}

int Fighter::getHitPoint() {
    return Fighter::hitPoint;
}

void Fighter::takingDamage(int damage) {
    Fighter::hitPoint -= damage;
    if(Fighter::hitPoint <= 0){
        Fighter::hitPoint = 0;
    }
}

int Fighter::getArmorClass() {
    return Fighter::armorClass;
}

void Fighter::setArmorClass(int armorClass) {
    Fighter::armorClass = armorClass;
}

vector<int> Fighter::getAttackBonus() {
    return Fighter::attackBonus;
}

void Fighter::setAttackBonus(const vector<int> attackBonus) {
    Fighter::attackBonus = attackBonus;
}

CharacterEquipment Fighter::getCharacterEquipment() {
    return Fighter::characterEquipment;
}

void Fighter::setCharacterEquipment(CharacterEquipment characterEquipment) {
    Fighter::characterEquipment = characterEquipment;
}

CharacterAttribute Fighter::getCharacterAttribute() {
    return Fighter::characterAttribute;
}

void Fighter::setCharacterAttribute(CharacterAttribute characterAttribute) {
    Fighter::characterAttribute = characterAttribute;
}

void Fighter::wearEquipment(string type, int enhancement) {
    updateAttribute(type,enhancement);
}

void Fighter::takeOffEquipment(string type, int enhancement) {
    enhancement = - enhancement;
    updateAttribute(type,enhancement);
}

void Fighter::updateAttribute(string type, int enhancement) {
    if(type.compare("Intelligence") == 0){

        this->getCharacterAttribute().setIntelligence(this->getCharacterAttribute().getIntelligence() + enhancement);

    }else if(type.compare("Wisdom") == 0){

        this->getCharacterAttribute().setWisdom(this->getCharacterAttribute().getWisdom() + enhancement);

    }else if(type.compare("Strength") == 0){

        this->getCharacterAttribute().setStrength(this->getCharacterAttribute().getStrength() + enhancement);

    }else if(type.compare("Constitution") == 0){

        this->getCharacterAttribute().setConstitution(this->getCharacterAttribute().getConstitution() + enhancement);

    }else if(type.compare("Charisma") == 0){

        this->getCharacterAttribute().setCharisma(this->getCharacterAttribute().getCharisma() + enhancement);

    }else if(type.compare("Dexterity") == 0){

        this->getCharacterAttribute().setDexterity(this->getCharacterAttribute().getDexterity() + enhancement);

    }
}

string Fighter::getType() {
    return Fighter::type;
}

void Fighter::setHitPoint(int i) {
    Fighter::hitPoint = i;
}

void Fighter::setLevel(int level) {
    Fighter::level = level;
}

void Fighter::setType(string type) {
    Fighter::type = type;
}

void Fighter::setBackpack(Backpack backpack) {
    Fighter::backpack = backpack;
}

void Fighter::printStatus() {
    cout<<"Hey! looks like you are a "<<type<<endl
        <<"Level:"<<this->level<< endl
        <<"Hit Point"<<this->hitPoint<< endl
        <<"Armor Class"<<this->armorClass<< endl
        <<"Let's see your stats:"<< endl
        <<"Strength: "<<characterAttribute.getStrength()<<endl
        <<"Constitution: "<<characterAttribute.getConstitution()<<endl
        <<"Dexterity: "<<characterAttribute.getDexterity()<<endl
        <<"Intelligence: "<<characterAttribute.getIntelligence()<<endl
        <<"Charisma: "<<characterAttribute.getCharisma()<<endl
        <<"Wisdom: "<<characterAttribute.getWisdom();
}






