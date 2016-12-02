//
// Created by Ethan Shen on 12/1/2016.
//

#include "SaveManager.h"

void SaveManager::savePlayer(Character *character) {
    xml_document<> doc;
    xml_node<>* decl = doc.allocate_node(node_declaration);
    decl->append_attribute(doc.allocate_attribute("version", "1.0"));
    decl->append_attribute(doc.allocate_attribute("encoding", "utf-8"));
    doc.append_node(decl);

    xml_node<>* characterNode = doc.allocate_node(node_element, "Character");
    doc.append_node(characterNode);

    xml_node<>* fighterNode = doc.allocate_node(node_element, "Fighter");
    fighterNode->append_attribute(doc.allocate_attribute("level", (const char *) character->getLevel()));
    fighterNode->append_attribute(doc.allocate_attribute("type", "example"));
    characterNode->append_node(fighterNode);

// Convert doc to string if needed
    std::string xml_as_string;
    rapidxml::print(std::back_inserter(xml_as_string), doc);

// Save to file
    std::ofstream file_stored("file_stored.xml");
    file_stored << doc;
    file_stored.close();
    doc.clear();
}
