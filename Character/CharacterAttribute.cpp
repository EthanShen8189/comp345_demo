//!
//! Created by Yang Shen on 2016-09-22.
//!

//! @file
//! @brief Implementation file for the CharacterAttribute class
//!
#include "CharacterAttribute.h"

//!Constructor: passes values to each attribute
CharacterAttribute::CharacterAttribute(int intelligence, int wisdom, int strength, int dexterity,
                                       int constitution, int charisma) : intelligence(intelligence),
                                                                         wisdom(wisdom), strength(strength),
                                                                         dexterity(dexterity),
                                                                         constitution(constitution),
                                                                         charisma(charisma) {}


int CharacterAttribute::getIntelligence() const {
    return intelligence;
}

void CharacterAttribute::setIntelligence(int intelligence) {
    CharacterAttribute::intelligence = intelligence;
}

int CharacterAttribute::getWisdom() const {
    return wisdom;
}

void CharacterAttribute::setWisdom(int wisdom) {
    CharacterAttribute::wisdom = wisdom;
}

int CharacterAttribute::getStrength() const {
    return strength;
}

void CharacterAttribute::setStrength(int strength) {
    CharacterAttribute::strength = strength;
}

int CharacterAttribute::getDexterity() const {
    return dexterity;
}

void CharacterAttribute::setDexterity(int dexterity) {
    CharacterAttribute::dexterity = dexterity;
}

int CharacterAttribute::getConstitution() const {
    return constitution;
}

void CharacterAttribute::setConstitution(int constitution) {
    CharacterAttribute::constitution = constitution;
}

int CharacterAttribute::getCharisma() const {
    return charisma;
}

void CharacterAttribute::setCharisma(int charisma) {
    CharacterAttribute::charisma = charisma;
}


CharacterAttribute::~CharacterAttribute() {

}

CharacterAttribute * CharacterAttribute::CharacterAttribute() {

}

