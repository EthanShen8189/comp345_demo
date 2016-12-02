//
// Created by Ethan Shen on 12/1/2016.
//

#include "Backpack.h"

vector<Item> Backpack::getInventory()  {
    return inventory;
}

void Backpack::setInventory(vector<Item> inventory)  {
    Backpack::inventory = inventory;
}

void Backpack::lootItem(Item item) {
    inventory.push_back(item);
}

Item Backpack::getItem(int index) {
    return inventory[index];
}

void Backpack::printAllItem() {
    int index = 0;
    cout<<"The backpack contains:";
    for(Item i: inventory){
        cout<<index<<": "<<i.getClassAsText()<<i.getEnchantmentType()<<"+"<<i.getEnchantmentBonus()<< endl;
        index++;
    }
}
