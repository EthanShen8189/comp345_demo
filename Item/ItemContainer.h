//
// Created by Ethan Shen on 11/30/2016.
//

#ifndef COMP345_GROUPPROJECT_ITEMCONTAINER_H
#define COMP345_GROUPPROJECT_ITEMCONTAINER_H


#include <vector>
#include "Item.h"

class ItemContainer {
public:
    virtual void addItem(){};
    virtual void removeItem(){};
    virtual void removeItemByType(string type){};
};


#endif //COMP345_GROUPPROJECT_ITEMCONTAINER_H
