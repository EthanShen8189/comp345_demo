//
// Created by Ethan Shen on 2016-11-01.
//

#include "GameMapElementBuilder.h"
#include <iostream>

using namespace std;

void GameMapElementBuilder::build(int level, int hp,Monster * monster, Chest * chest) {
    setMonsterStat(level, hp, monster);
    setChestStat(chest);
}

void GameMapElementBuilder::setMonsterStat(int level, int hp,Monster * monster) {
    monster->setLevel(level+1);
    monster->setDamagePoint((int) (hp * 0.2));
    monster->setHitPoint((int) (hp * 1.6));
}

void GameMapElementBuilder::setChestStat(Chest * chest) {
    for(Item i : chest->getChest()){
        i.setEnchantBonus(rand()%5 +1);
    }
}
