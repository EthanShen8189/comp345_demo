//
// Created by Ethan Shen on 12/1/2016.
//

#ifndef COMP345_PROJECT_DEMO_CHARACTERDRIVER_H
#define COMP345_PROJECT_DEMO_CHARACTERDRIVER_H

#include <iostream>
#include "../Character/Fighter.h"
#include "../Builder/PlayerBuilder.h"

class CharacterDriver {
public:
    void run();
    void createNewPlayer();
    void playerLevelUp(Fighter *fighter);
    void savePlayer(Fighter * fighter);
};


#endif //COMP345_PROJECT_DEMO_CHARACTERDRIVER_H
