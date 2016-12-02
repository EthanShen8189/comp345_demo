//
// Created by Ethan Shen on 12/1/2016.
//

#ifndef COMP345_PROJECT_DEMO_COMBATDRIVER_H
#define COMP345_PROJECT_DEMO_COMBATDRIVER_H


#include "../Character/Character.h"
#include "../MapElement/Chest.h"

class CombatDriver {
    void run();
    void startCombat(Character * player, Character * enemy);
    void lootItems(Character *character, Chest * chest);
};


#endif //COMP345_PROJECT_DEMO_COMBATDRIVER_H
