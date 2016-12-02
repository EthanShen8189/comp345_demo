//
// Created by Ethan Shen on 2016-11-01.
//

#include "Chest.h"

Chest::Chest(){}
Chest::~Chest() {
    delete this;
}

vector<Item> Chest::getChest() {
    return chest;
}

void Chest::setChest(vector<Item> chest) {
    Chest::chest = chest;
}

void Chest::pushItemIntoChest(Item item) {
    Chest::chest.push_back(item);
}

void Chest::printAllItem() {
    int index = 0;
    cout<<"The chest contains:";
    for(Item i: chest){
        cout<<index<<": "<<i.getClassAsText()<<i.getEnchantmentType()<<"+"<<i.getEnchantmentBonus()<< endl;
        index++;
    }
}

void Chest::emptyChest() {
    while(!chest.empty()){
        chest.pop_back();
    }
}
