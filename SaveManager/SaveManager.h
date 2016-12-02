//
// Created by Ethan Shen on 12/1/2016.
//

#ifndef COMP345_PROJECT_DEMO_SAVEMANAGER_H
#define COMP345_PROJECT_DEMO_SAVEMANAGER_H


#include "../Character/Character.h"
#include "../MapElement/Monster.h"
#include "../MapElement/Chest.h"
#include "../rapidxml/rapidxml.hpp"
#include "../rapidxml/rapidxml_print.hpp"
#include <fstream>
#include <sstream>

using namespace rapidxml;

class SaveManager {
public:
    void savePlayer(Character * character);
    void saveItem(Item * item);
    void saveMonster(Monster * monster);
    void saveChest(Chest * chest);
};


#endif //COMP345_PROJECT_DEMO_SAVEMANAGER_H
