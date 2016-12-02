//!
//! Created by Ethan Shen on 2016-09-22.
//!

//! @file
//! @brief Header file for the CharacterEquipment class
//!

#ifndef COMP345_GROUPPROJECT_EQUIPMENT_H
#define COMP345_GROUPPROJECT_EQUIPMENT_H

#include "../Item/Item.h"
#include "../Item/Helmet.h"
#include "../Item/Armor.h"
#include "../Item/Shield.h"
#include "../Item/Ring.h"
#include "../Item/Belt.h"
#include "../Item/Boots.h"
#include "../Item/Weapon.h"
#include "../Item/ItemContainer.h"

//! Class that implements a character's equipment.

class CharacterEquipment : public ItemContainer{
private:
    Item items[7] = {Helmet(0,NULL), Armor(0,NULL), Shield(0,NULL), Ring(0,NULL), Belt(0,NULL), Boots(0,NULL), Weapon(0,NULL)};
public:
    CharacterEquipment();

    virtual ~CharacterEquipment();

    Helmet equipHelmet(Helmet *helmet);
    Armor equipArmor(Armor *armor);
    Shield equipShield(Shield *shield);
    Ring equipRing(Ring *ring);
    Belt equipBelt(Belt *belt);
    Boots equipBoots(Boots *boots);
    Weapon equipWeapon(Weapon *weapon);


};


#endif //COMP345_GROUPPROJECT_EQUIPMENT_H
