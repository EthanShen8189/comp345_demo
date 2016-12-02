//
// Created by Ethan Shen on 2016-11-01.
//

#ifndef COMP345_A2_GAMEMAPBUILDER_H
#define COMP345_A2_GAMEMAPBUILDER_H

#include "../MapElement/Chest.h"
#include "../MapElement/Monster.h"
#include "../Character/Fighter.h"
#include "Builder.h"
#include <string>

using namespace std;

class GameMapElementBuilder : public Builder {
public:
    GameMapElementBuilder(){};
    void build(int level, int hp,Monster * monster, Chest * chest);
    void setMonsterStat(int level, int hp, Monster * monster);
    void setChestStat(Chest * chest);
};


#endif //COMP345_A2_GAMEMAPBUILDER_H
