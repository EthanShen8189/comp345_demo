
//
// Created by Ethan Shen on 2016-11-01.
//

#ifndef COMP345_A2_EDITORMAPBUILDER_H
#define COMP345_A2_EDITORMAPBUILDER_H

#include <string>
#include <iostream>
#include <fstream>

#include "../MapElement/Monster.h"
#include "../MapElement/Chest.h"
#include "../rapidxml/rapidxml.hpp"
#include "Builder.h"
#include "../MapElement/Door.h"

using namespace rapidxml;

class EditorMapElementBuilder : public Builder{
public:
    EditorMapElementBuilder(){};
    void build(string file, Chest* chest, Monster* monster, Door * entrance, Door * exit);
    void buildChest(xml_node<> * item_node, Chest * chest);
    void buildDoors(xml_node<> *entrance_node, xml_node<> *exit_node,  Door * entrance, Door * exit);
    virtual ~EditorMapElementBuilder();
};


#endif //COMP345_A2_EDITORMAPBUILDER_H
