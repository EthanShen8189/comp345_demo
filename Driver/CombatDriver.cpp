//
// Created by Ethan Shen on 12/1/2016.
//

#include "CombatDriver.h"
#include "../Character/Fighter.h"


void CombatDriver::run() {
    int flag = -1;

    while(flag != 0){
        Chest chest = Chest();

        vector<int> bullyAttackRound = {10,5};
        vector<int> bully2AttackRound = {10,5};

        CharacterAttribute bullyAtr = CharacterAttribute(12,11,10,9,8,7);
        CharacterAttribute bully2Atr = CharacterAttribute(12,11,10,9,8,7);

        Item *bullyBoots = new Boots();
        Item *bullyWeapon = new Weapon();
        Item *bully2Helmet = new Helmet();
        Item *bully2Ring = new Ring();

        CharacterEquipment bullyEquip = CharacterEquipment();
        CharacterEquipment bully2Equip = CharacterEquipment();

        bullyEquip.equipBoots(bullyBoots);
        bullyEquip.equipWeapon(bullyWeapon);
        bully2Equip.equipHelmet(bully2Helmet);
        bully2Equip.equipRing(bully2Ring);

        Character * player =new Fighter(10,50,30,"Bully",bullyAttackRound,bullyAtr,bullyEquip);
        Character * enemy = new Fighter(10,50,30,"Bully",bully2AttackRound,bully2Atr,bully2Equip);

        cout<<"Please choose action for demo:";
        cout<<"1. Start Fight!"<< endl
            <<"0. Go back";

        cin>>flag;
        if(flag == 1){
           startCombat(player,enemy);

            delete player,enemy,bullyAttackRound,bully2AttackRound,bully2Atr,bullyAtr
                    ,bullyBoots,bullyWeapon,bully2Helmet,bully2Ring,bullyEquip,bully2Equip;
        }else if(flag == 0){
            delete player,enemy,bullyAttackRound,bully2AttackRound,bully2Atr,bullyAtr
                    ,bullyBoots,bullyWeapon,bully2Helmet,bully2Ring,bullyEquip,bully2Equip;
            break;
        }else{
            flag = -1;
            delete player,enemy,bullyAttackRound,bully2AttackRound,bully2Atr,bullyAtr
                    ,bullyBoots,bullyWeapon,bully2Helmet,bully2Ring,bullyEquip,bully2Equip;
            cout<<"Please enter an integer between 1-3";
        }
    }
}

void CombatDriver::startCombat(Character *player, Character *enemy) {
    Chest *chest = new Chest();
    int prompt;
    while(player->getHitPoint() != 0 || enemy->getHitPoint()!=0){
        cout<<"Character 1 is attacking......";
        player->attack(enemy);
        cout<<"Character 2's hp is now: "<<enemy->getHitPoint();
        if(player->getHitPoint() == 0){
            cout<<"Character 2 won!, would you like to loot? 0:No, 1:Yes";
            cin>>prompt;
            if(prompt == 1) {
                for (int i = 0; i < player->getCharacterEquipment().getItems().size(); i++) {
                    if (player->getCharacterEquipment().getItems()[i].getEnchantmentType() != NULL) {
                        chest->pushItemIntoChest(player->getCharacterEquipment().getItems()[i]);
                    }
                }
                chest->printAllItem();
                lootItems(enemy,chest);
                enemy->getBackpack().printAllItem();
            }
            break;
        }
        cout<<"Character 2 is attacking......";
        enemy->attack(player);
        cout<<"Character 1's hp is now: "<<player->getHitPoint();
        if(enemy->getHitPoint() == 0) {
            cout << "Character 1 won!, would you like to loot? 0:No, 1:Yes";
            cin >> prompt;
            if (prompt == 1) {
                for (int i = 0; i < enemy->getCharacterEquipment().getItems().size(); i++) {
                    if (enemy->getCharacterEquipment().getItems()[i].getEnchantmentType() != NULL) {
                        chest->pushItemIntoChest(enemy->getCharacterEquipment().getItems()[i]);
                    }
                }
                chest->printAllItem();
                lootItems(player,chest);
                player->getBackpack().printAllItem();
            }
            break;
        }
    }
}

void CombatDriver::lootItems(Character *character, Chest * chest) {
    for(Item i: chest->getChest()){
        character->getBackpack().lootItem(i);
    }
}


