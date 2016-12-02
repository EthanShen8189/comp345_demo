//!
//! Created by Ethan Shen on 2016-09-22.
//!

//! @file
//! @brief Header file for the Fighter class
//!

#ifndef COMP345_GROUPPROJECT_CHARACTER_H
#define COMP345_GROUPPROJECT_CHARACTER_H

#include <string>
#include <vector>
using namespace std;

#include "../Item/Item.h"
#include "../Item/ItemContainer.h"
#include "CharacterEquipment.h"
#include "CharacterAttribute.h"
#include "Backpack.h"


//! Class that implements a fighter
class Character {
public:
    virtual Character(){};
    virtual ~Character(){};
    virtual int modifier(int dice, int bonus){ return 0;};
    virtual void wearEquipment(string type, int enhancement){};
    virtual void takeOffEquipment(string type, int enhancement){};
    virtual int getLevel(){return 0;};
    virtual void incrementLevel(){};
    virtual void setHitPoint(int i){};
    virtual int getHitPoint(){return 0;};
    virtual void takingDamage(int hitPoint){};
    virtual int getArmorClass(){return 0;};
    virtual void setArmorClass(int armorClass){};
    virtual vector<int> getAttackBonus(){ return NULL;};
    virtual void setAttackBonus(vector<int> attackBonus){};
    virtual CharacterEquipment getCharacterEquipment(){ return NULL;};
    virtual void setCharacterEquipment(CharacterEquipment characterEquipment){};
    virtual CharacterAttribute getCharacterAttribute(){};
    virtual void setCharacterAttribute(CharacterAttribute characterAttribute){};
    virtual void updateAttribute(string type, int enhancement){};
    virtual string getType(){};
    virtual void setLevel(int level){};
    virtual void setType(string type){};
    virtual void setBackpack(Backpack backpack){};
    virtual Backpack getBackpack(){};
    virtual void printStatus(){};

};


#endif //COMP345_GROUPPROJECT_FIGHTER_H
