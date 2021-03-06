//!
//! Created by Ethan Shen on 2016-11-26.
//!

//! @file
//! @brief Header file for the PlayerBuilder class
//!

#ifndef COMP345_GROUPPROJECT_PLAYERBUILDER_H
#define COMP345_GROUPPROJECT_PLAYERBUILDER_H

#include <fstream>
#include <iostream>

#include "CharacterBuilder.h"
#include "../rapidxml/rapidxml.hpp"

using namespace rapidxml;

//! Class that implements a fighter
class PlayerBuilder : public CharacterBuilder{
public:
    void generateAttribute(CharacterAttribute characterAttribute , string type);
    void buildNewPlayer(Character * character);
    void buildPlayingPlayer(Character * character);
    void loadPlayer(string file, Character * character);
    void setAttackBonus(Character *character);
    void setHP(Character *character);
    int constitutionModifier(int d);
    virtual ~PlayerBuilder();
};


#endif //COMP345_GROUPPROJECT_PLAYERBUILDER_H
