//
// Created by Ethan Shen on 2016-11-01.
//

#include "EditorMapElementBuilder.h"

using namespace std;

void EditorMapElementBuilder::build(string file, Chest* chest, Monster* monster,
                                    Door * entrance, Door * exit) {
    cout<<"Loading Map......."<< endl;

    xml_document<> doc;
    xml_node<> * root_node;
    xml_node<> * map_node;
    xml_node<> * monster_node;
    xml_node<> * chest_node;
    xml_node<> * item_node;
    xml_node<> * entrance_node;
    xml_node<> * exit_node;

    ifstream theFile(file);
    vector<char> buffer((istreambuf_iterator<char>(theFile)), istreambuf_iterator<char>());

    buffer.push_back('\0');

    doc.parse<0>(&buffer[0]);

    root_node = doc.first_node("MapEditor");

    if(root_node != NULL){
        map_node = root_node->first_node("Map");
        if(map_node != NULL){
            monster_node = map_node->first_node("Monster");

            chest_node = map_node->first_node("Chest");

            item_node = chest_node->first_node("Item");

            entrance_node = map_node->first_node("Entrance");

            exit_node = map_node->first_node("Exit");

            monster->Monster((int)monster_node->first_attribute("level")->value(),
                                   (int)monster_node->first_attribute("hitpoint")->value(),
                                   (int)monster_node->first_attribute("damagepoint")->value());

            buildChest(item_node,chest);
            buildDoors(entrance_node,exit_node,entrance,exit);
        }
    }
    doc.clear();
    cout<<"Finished map loading...." << endl;

}

void EditorMapElementBuilder::buildChest(xml_node<> *item_node, Chest * chest) {
    if(item_node->value()=="Helmet"){

        Helmet helmet = Helmet((int) item_node->first_attribute("value")->value(), item_node->first_attribute("enhancement")->value());
        chest->pushItemIntoChest(helmet);

    }else if(item_node->value()=="Ring"){

        Ring *ring = new Ring((int) item_node->first_attribute("value")->value(), item_node->first_attribute("enhancement")->value());
        chest->pushItemIntoChest(*ring);

    }else if(item_node->value()=="Weapon"){

        Weapon *weapon = new Weapon((int) item_node->first_attribute("value")->value(), item_node->first_attribute("enhancement")->value());
        chest->pushItemIntoChest(*weapon);

    }else if(item_node->value()=="Armor"){

        Armor *armor = new Armor((int) item_node->first_attribute("value")->value(), item_node->first_attribute("enhancement")->value());
        chest->pushItemIntoChest(*armor);

    }else if(item_node->value()=="Boots"){

        Boots *boots = new Boots((int) item_node->first_attribute("value")->value(), item_node->first_attribute("enhancement")->value());
        chest->pushItemIntoChest(*boots);
    }else if(item_node->value()=="Belt"){

        Belt *belt = new Belt((int) item_node->first_attribute("value")->value(), item_node->first_attribute("enhancement")->value());
        chest->pushItemIntoChest(*belt);
    }else if(item_node->value()=="Shield"){

        Shield *shield = new Shield((int) item_node->first_attribute("value")->value(), item_node->first_attribute("enhancement")->value());
        chest->pushItemIntoChest(*shield);
    }
}

void EditorMapElementBuilder::buildDoors(xml_node<> *entrance_node, xml_node<> *exit_node,  Door * entrance, Door * exit){
    entrance->setName("Entrance");
    entrance->setXcoordinate((int)entrance_node->first_attribute("xposition"));
    entrance->setYcoordinate((int)entrance_node->first_attribute("yposition"));

    exit->setName("Exit");
    exit->setXcoordinate((int)exit_node->first_attribute("xposition"));
    exit->setYcoordinate((int)exit_node->first_attribute("yposition"));
    exit->setIsLocked((bool) exit_node->first_attribute("key"));
}

EditorMapElementBuilder::~EditorMapElementBuilder() {
    delete this;
}
