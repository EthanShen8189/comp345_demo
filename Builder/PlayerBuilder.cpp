//!
//! Created by Yang Shen on 2016-09-22.
//!

//! @file
//! @brief Implementation file for the PlayerBuilder class
//!

#include "PlayerBuilder.h"

//! Implementation of build player object when it first initialize.
//! @param Character*
void PlayerBuilder::buildNewPlayer(Character * character) {
    generateAttribute(character->getCharacterAttribute(),character->getType());
    setAttackBonus(character);
}

//!Implementation of player builder when a play level up.
//! @param Character*
void PlayerBuilder::buildPlayingPlayer(Character *character) {
    setHP(character);
    setAttackBonus(character);
}

void PlayerBuilder::generateAttribute(CharacterAttribute characterAttribute, string type) {
    vector<int> singleRoll;
    vector<int> ability;
    Dice dice = Dice();
    for (int i = 0; i < 6; i++) {
        singleRoll = dice.roll("4d6");
        sort(singleRoll.begin(), singleRoll.end(), greater<int>());
        ability.push_back(singleRoll[0] + singleRoll[1] + singleRoll[2]);
    }
    delete dice;
    sort(ability.begin(), ability.end(), greater<int>());

    if(type == "Bully"){
        characterAttribute.CharacterAttribute(ability[3],ability[5],ability[0],ability[2],ability[1],ability[4]);
    }else if (type == "Nimble"){
        characterAttribute.CharacterAttribute(ability[3],ability[5],ability[2],ability[0],ability[1],ability[4]);
    }else if (type == "Tank"){
        characterAttribute.CharacterAttribute(ability[3],ability[5],ability[2],ability[1],ability[0],ability[4]);
    }

}

void PlayerBuilder::setAttackBonus(Character *character) {
    vector<int> attackBonus = {0,0,0,0};
    if(character->getLevel()<=5){
        attackBonus[0]=character->getLevel();
        character->setAttackBonus(attackBonus);
    }else if(character->getLevel()>5 && character->getLevel()<=10){
        attackBonus[0] = character->getLevel();
        attackBonus[1] = character->getLevel() - 5;
        character->setAttackBonus(attackBonus);
    }else if(character->getLevel()>10 && character->getLevel()<=15){
        attackBonus[0] = character->getLevel();
        attackBonus[1] = character->getLevel() - 5;
        attackBonus[2] = character->getLevel() - 10;
        character->setAttackBonus(attackBonus);
    }else if(character->getLevel()>15 && character->getLevel()<=20){
        attackBonus[0] = character->getLevel();
        attackBonus[1] = character->getLevel() - 5;
        attackBonus[2] = character->getLevel() - 10;
        attackBonus[3] = character->getLevel() - 15;
        character->setAttackBonus(attackBonus);
    }
}

int PlayerBuilder::constitutionModifier(int d) {
    return d-6;
}

void PlayerBuilder::setHP(Character *character) {
    Dice dice = Dice();
    vector<int> result = dice.roll("1d10");
    int diceVar = result[0];

    character->setHitPoint(character->getHitPoint() + diceVar + constitutionModifier(diceVar));

}

//!Destroyer of playerBuilder.
PlayerBuilder::~PlayerBuilder() {

}

void PlayerBuilder::loadPlayer(string file, Character * character) {
    cout<<"Loading Player......."<< endl;

    xml_document<> doc;
    xml_node<> * character_node;
    xml_node<> * fighter_node;
    xml_node<> * attackBonus_node;

    ifstream theFile(file);
    vector<char> buffer((istreambuf_iterator<char>(theFile)), istreambuf_iterator<char>());

    buffer.push_back('\0');

    doc.parse<0>(&buffer[0]);

    character_node = doc.first_node("Character");

    if(character_node != NULL){
        fighter_node = character_node->first_node("Fighter");
        if(fighter_node != NULL){
        character->setType(fighter_node->first_attribute("type")->value());
        character->setLevel((int)fighter_node->first_attribute("level")->value());
        character->setHitPoint((int)fighter_node->first_attribute("HP")->value());
        character->setArmorClass((int)fighter_node->first_attribute("armorClass")->value());

        attackBonus_node = fighter_node->first_node("AttackBonus");
            vector<int> aBbuffer;
            for(int i=0; i<4; i++){
                aBbuffer.push_back((int)attackBonus_node->first_attribute((const char *) i)->value());
            }
            character->setAttackBonus(aBbuffer);
        }

    }
    doc.clear();

    cout<<"Finished Loading.....";
}


