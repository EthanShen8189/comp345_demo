//!
//! Created by Ethan Shen on 2016-11-26.
//!

//! @file
//! @brief Header file for the CharacterBuilder class
//!

#ifndef COMP345_GROUPPROJECT_CHARACTERBUILDER_H
#define COMP345_GROUPPROJECT_CHARACTERBUILDER_H


#include "Builder.h"
#include "../Character/Fighter.h"
#include "../Dice/Dice.h"

class CharacterBuilder : public Builder{
public:
    virtual void generateAttribute(CharacterAttribute * characterAttribute, string type){};
    virtual void setHP(Character * character){};
    virtual int constitutionModifier(int d){};
    virtual void setAttackBonus(Character * character){};
    virtual ~CharacterBuilder(){};
};


#endif //COMP345_GROUPPROJECT_CHARACTERBUILDER_H
