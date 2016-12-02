//
// Created by Ethan Shen on 12/1/2016.
//

#ifndef COMP345_PROJECT_DEMO_BACKPACK_H
#define COMP345_PROJECT_DEMO_BACKPACK_H

#include <iostream>
#include "../Item/ItemContainer.h"

class Backpack : public ItemContainer {
private:
    vector<Item> inventory;
public:
    Backpack(){};
    vector<Item> getInventory();
    void setInventory(vector<Item> inventory);
    void lootItem(Item item);
    Item getItem(int index);
    void printAllItem();
};


#endif //COMP345_PROJECT_DEMO_BACKPACK_H
