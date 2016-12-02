//
// Created by Ethan Shen on 12/1/2016.
//

#include <cstring>
#include "SaveManager.h"
#include "../Builder/PlayerBuilder.h"

void SaveManager::savePlayer(Character *character) {
    char pbuff[32];
    xml_document<> doc;
    xml_node<>* decl = doc.allocate_node(node_declaration);
    decl->append_attribute(doc.allocate_attribute("version", "1.0"));
    decl->append_attribute(doc.allocate_attribute("encoding", "utf-8"));
    doc.append_node(decl);

    xml_node<>* characterNode = doc.allocate_node(node_element, "Character");
    doc.append_node(characterNode);

    xml_node<>* fighterNode = doc.allocate_node(node_element, "Fighter");

    itoa(character->getLevel(),pbuff,10);
    fighterNode->append_attribute(doc.allocate_attribute("level", pbuff));
    memset(&pbuff[0], 0, sizeof(pbuff));

    strcpy(pbuff,character->getType().c_str());
    fighterNode->append_attribute(doc.allocate_attribute("type", pbuff));
    memset(&pbuff[0], 0, sizeof(pbuff));

    itoa(character->getHitPoint(), pbuff, 10);
    fighterNode->append_attribute(doc.allocate_attribute("HP", pbuff));
    memset(&pbuff[0], 0, sizeof(pbuff));

    itoa(character->getArmorClass(), pbuff, 10);
    fighterNode->append_attribute(doc.allocate_attribute("armorClass", pbuff));
    memset(&pbuff[0], 0, sizeof(pbuff));

    xml_node<>* attackBonusNode = doc.allocate_node(node_element,"AttackBonus");
    for(int i=0; i<4;i++){
        attackBonusNode->append_attribute(doc.allocate_attribute((const char *) i,
                                                                 (const char *) character->getAttackBonus()[i]));
    }
    fighterNode->append_node(attackBonusNode);

    characterNode->append_node(fighterNode);

// Convert doc to string if needed
    std::string xml_as_string;
    rapidxml::print(std::back_inserter(xml_as_string), doc);

// Save to file
    std::ofstream file_stored("../SaveManager/SavedFiles/Player.xml");
    file_stored << doc;
    file_stored.close();
    doc.clear();
}

void SaveManager::saveItem(Item *item) {
    char pbuff[32];
    xml_document<> doc;
    xml_node<>* decl = doc.allocate_node(node_declaration);
    decl->append_attribute(doc.allocate_attribute("version", "1.0"));
    decl->append_attribute(doc.allocate_attribute("encoding", "utf-8"));
    doc.append_node(decl);

    xml_node<>* itemNode = doc.allocate_node(node_element, "Item");
    strcpy(pbuff,item->getEnchantmentType().c_str());
    itemNode->append_attribute(doc.allocate_attribute("enchantmentType", pbuff));
    memset(&pbuff[0], 0, sizeof(pbuff));

    itemNode->append_attribute(doc.allocate_attribute("enchantmentBonus", (const char *) item->getEnchantmentBonus()));

    doc.append_node(itemNode);

    // Convert doc to string if needed
    std::string xml_as_string;
    rapidxml::print(std::back_inserter(xml_as_string), doc);

// Save to file
    std::ofstream file_stored("../SaveManager/SavedFiles/Item.xml");
    file_stored << doc;
    file_stored.close();
    doc.clear();

}

void SaveManager::saveChest(Chest * chest) {
    char pbuff[32];
    xml_document<> doc;
    xml_node<>* decl = doc.allocate_node(node_declaration);
    decl->append_attribute(doc.allocate_attribute("version", "1.0"));
    decl->append_attribute(doc.allocate_attribute("encoding", "utf-8"));
    doc.append_node(decl);

    xml_node<>* chestNode = doc.allocate_node(node_element, "Chest");

    for(int i=0; i<chest->getChest().size(); i++){
        xml_node<>* itemNode = doc.allocate_node(node_element, "Item");

        strcpy(pbuff,chest->getChest()[i].getClassAsText().c_str());
        itemNode->append_attribute(doc.allocate_attribute("ItemType", pbuff));
        memset(&pbuff[0], 0, sizeof(pbuff));

        strcpy(pbuff,chest->getChest()[i].getEnchantmentType().c_str());
        itemNode->append_attribute(doc.allocate_attribute("enchantmentType", pbuff));
        memset(&pbuff[0], 0, sizeof(pbuff));

        itemNode->append_attribute(doc.allocate_attribute("enchantmentBonus", (const char *) chest->getChest()[i].getEnchantmentBonus()));

        chestNode->append_node(itemNode);
    }
    doc.append_node(chestNode);

    // Convert doc to string if needed
    std::string xml_as_string;
    rapidxml::print(std::back_inserter(xml_as_string), doc);

// Save to file
    std::ofstream file_stored("../SaveManager/SavedFiles/Chest.xml");
    file_stored << doc;
    file_stored.close();
    doc.clear();

}

void SaveManager::saveMonster(Monster *monster) {
    xml_document<> doc;
    xml_node<>* decl = doc.allocate_node(node_declaration);
    decl->append_attribute(doc.allocate_attribute("version", "1.0"));
    decl->append_attribute(doc.allocate_attribute("encoding", "utf-8"));
    doc.append_node(decl);

    xml_node<>* monsterNode = doc.allocate_node(node_element, "Monster");

    monsterNode->append_attribute(doc.allocate_attribute("level", (const char *) monster->getLevel()));
    monsterNode->append_attribute(doc.allocate_attribute("hitPoint", (const char *) monster->getHitPoint()));
    monsterNode->append_attribute(doc.allocate_attribute("damagePoint", (const char *) monster->getDamagePoint()));

    doc.append_node(monsterNode);

    // Convert doc to string if needed
    std::string xml_as_string;
    rapidxml::print(std::back_inserter(xml_as_string), doc);

// Save to file
    std::ofstream file_stored("../SaveManager/SavedFiles/Item.xml");
    file_stored << doc;
    file_stored.close();
    doc.clear();

}


