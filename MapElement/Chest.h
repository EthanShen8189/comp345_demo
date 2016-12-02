//
// Created by Ethan Shen on 2016-11-01.
//

#ifndef COMP345_A2_CHEST_H
#define COMP345_A2_CHEST_H
#include <vector>
#include "../Item/Helmet.h"
#include "../Item/Armor.h"
#include "../Item/Shield.h"
#include "../Item/Ring.h"
#include "../Item/Belt.h"
#include "../Item/Boots.h"
#include "../Item/Weapon.h"
#include "../Item/ItemContainer.h"


using namespace std;

class Chest : public ItemContainer{
private:
    vector<Item> chest = {};
public:
    Chest();
    vector<Item> getChest() ;
    void setChest(vector<Item> chest);
    void pushItemIntoChest(Item item);
    void printAllItem();
    void emptyChest();
    virtual ~Chest();
};


#endif //COMP345_A2_CHEST_H
