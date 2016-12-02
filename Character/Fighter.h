//
// Created by Ethan Shen on 2016-11-27.
//

#ifndef COMP345_GROUPPROJECT_FIGHTER_H
#define COMP345_GROUPPROJECT_FIGHTER_H


#include "Character.h"
#include "Backpack.h"
#include "../Dice/Dice.h"


class Fighter : public Character{
private:
    int level = 1;
    int hitPoint = 10;
    int armorClass;
    string type;
    vector<int> attackBonus = {0,0,0,0};
    Backpack backpack = Backpack();
    CharacterEquipment characterEquipment = CharacterEquipment();
    CharacterAttribute characterAttribute = CharacterAttribute(0, 0, 0, 0, 0, 0);
public:
    Fighter();
    Fighter(int level, int hitPoint, int armorClass, string type, vector<int> attackBonus, CharacterAttribute characterAttribute, CharacterEquipment characterEquipment);
    int modifier(int dice, int bonus);
    int getLevel();
    void incrementLevel();
    void setHitPoint(int i);
    int getHitPoint();
    void setLevel(int level);
    void setType(string type);
    void setBackpack(Backpack backpack);
    void takingDamage(int hitPoint);
    int getArmorClass();
    void setArmorClass(int armorClass);
    vector<int> getAttackBonus();
    void setAttackBonus(vector<int> attackBonus);
    CharacterEquipment getCharacterEquipment();
    void setCharacterEquipment(CharacterEquipment characterEquipment);
    CharacterAttribute getCharacterAttribute();
    void setCharacterAttribute(CharacterAttribute characterAttribute);
    void wearEquipment(string type, int enhancement);
    void takeOffEquipment(string type, int enhancement);
    void updateAttribute(string type, int enhancement);
    string getType();
    void printStatus();
    Backpack getBackpack();
    void attack(Character * opponent);
    bool isValidFighter();
};


#endif //COMP345_GROUPPROJECT_FIGHTER_H
