//
// Created by Ethan Shen on 12/1/2016.
//

#ifndef COMP345_PROJECT_DEMO_MAPELEMENTDRIVER_H
#define COMP345_PROJECT_DEMO_MAPELEMENTDRIVER_H


#include "../Character/Character.h"
#include "../MapElement/Chest.h"

class MapElementDriver {
public:
    void run();
    void lootChest(Chest * chest, Character * character);
    void viewInventory(Character * character);
    void viewChestContent(Chest * chest);
    void viewCharacterStats(Character * character);
    void changeEquipment(Character * character);
};


#endif //COMP345_PROJECT_DEMO_MAPELEMENTDRIVER_H
