//
// Created by Ethan Shen on 11/30/2016.
//

#ifndef COMP345_GROUPPROJECT_ITEM_H
#define COMP345_GROUPPROJECT_ITEM_H

#include <string>
using namespace std;


class Item {
public:
    Item(){};
    virtual void setEnchantBonus(int i){};
    virtual string getClassAsText(){ return ""; };
    virtual int getEnchantmentBonus(){ return 0;};
    virtual string getEnchantmentType(){ return "";};
    virtual ~Item(){};
};


#endif //COMP345_GROUPPROJECT_ITEM_H
