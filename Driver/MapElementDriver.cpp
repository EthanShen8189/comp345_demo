//
// Created by Ethan Shen on 12/1/2016.
//

#include <cstring>
#include "MapElementDriver.h"
#include "../Character/Fighter.h"

void MapElementDriver::run() {
    int flag = -1;
    while(flag != 0){
        Chest *chest =new Chest();
        Character * character = new Fighter();
        Item boots = Boots();
        chest->pushItemIntoChest(boots);

        cout<<"Please choose action for demo:";
        cout<<"1. View my inventory"<< endl
            <<"2. View a Chest"<< endl
            <<"3. View a character's info"<< endl
            <<"0. Go back";

        cin>>flag;
        if(flag == 1){
            int changePromt;
            viewInventory(character);
            cout<<"Would you like to change an equipment? 0:No, 1:Yes";
            cin>>changePromt;
            if(changePromt == 1) {
                changeEquipment(character);
                delete character,chest;
            }
        }else if(flag == 2){
            int promt;
            viewChestContent(chest);
            cout<<"Would you like to loot them? 0:No, 1:Yes";
            cin>>promt;
            if(promt == 1){
                lootChest(chest, character);
                delete character,chest;
            }else{
                cout<<"Sorry, I don't understand.";
                delete character,chest;
            }
        }else if(flag ==3){
            viewCharacterStats(character);
            delete character,chest;
        }else if(flag == 0){
            delete character,chest;
            break;
        }else{
            flag = -1;
            cout<<"Please enter an integer between 1-3";
            delete character,chest;
        }
    }
}

void MapElementDriver::lootChest(Chest *chest, Character *character) {
    cout<<"Looting.....";
    for(int i=0; i<chest->getChest().size(); i++){
        character->getBackpack().lootItem(chest->getChest()[i]);
    }
    chest->emptyChest();
    viewInventory(character);
}

void MapElementDriver::viewInventory(Character *character) {
    character->getBackpack().printAllItem();
}

void MapElementDriver::viewChestContent(Chest *chest) {
    cout<<"Opening chest........";
    chest->printAllItem();

}

void MapElementDriver::viewCharacterStats(Character *character) {
    character->printStatus();
}

void MapElementDriver::changeEquipment(Character *character) {
    int index;
    cout<<"Please enter the index of Item in your backpack:";
    character->getBackpack().printAllItem();
    cin>>index;
    if(index < 0 || index > character->getBackpack().getInventory().size()){
        cout<<"This Item does not exist!";
    }else{
        if(strcmp(character->getBackpack().getInventory()[index].getClassAsText() , "Armor")==0){
            character->takeOffEquipment(character->getBackpack().getInventory()[1].getEnchantmentType()
                                        ,character->getBackpack().getInventory()[1].getEnchantmentBonus());

            character->getBackpack().getInventory()[index] = character->getCharacterEquipment().equipArmor(
                    (Item *) character->getBackpack().getInventory()[index]);

            character->wearEquipment(character->getBackpack().getInventory()[index].getEnchantmentType()
                    ,character->getBackpack().getInventory()[index].getEnchantmentBonus());

        }else if(strcmp(character->getBackpack().getInventory()[index].getClassAsText(), "Helmet")==0) {
            character->takeOffEquipment(character->getBackpack().getInventory()[0].getEnchantmentType(),
                                        character->getBackpack().getInventory()[0].getEnchantmentBonus());

            character->getBackpack().getInventory()[index] = character->getCharacterEquipment().equipHelmet(
                    (Item *) character->getBackpack().getInventory()[index]);

            character->wearEquipment(character->getBackpack().getInventory()[index].getEnchantmentType(),
                                     character->getBackpack().getInventory()[index].getEnchantmentBonus());

        }else if(strcmp(character->getBackpack().getInventory()[index].getClassAsText(), "Shield")==0) {
            character->takeOffEquipment(character->getBackpack().getInventory()[2].getEnchantmentType(),
                                        character->getBackpack().getInventory()[2].getEnchantmentBonus());

            character->getBackpack().getInventory()[index] = character->getCharacterEquipment().equipShield(
                    (Item *) character->getBackpack().getInventory()[index]);

            character->wearEquipment(character->getBackpack().getInventory()[index].getEnchantmentType(),
                                     character->getBackpack().getInventory()[index].getEnchantmentBonus());

        }else if(strcmp(character->getBackpack().getInventory()[index].getClassAsText() ,"Ring")==0) {
            character->takeOffEquipment(character->getBackpack().getInventory()[3].getEnchantmentType(),
                                        character->getBackpack().getInventory()[3].getEnchantmentBonus());

            character->getBackpack().getInventory()[index] = character->getCharacterEquipment().equipRing(
                    (Item *) character->getBackpack().getInventory()[index]);

            character->wearEquipment(character->getBackpack().getInventory()[index].getEnchantmentType(),
                                     character->getBackpack().getInventory()[index].getEnchantmentBonus());

        }else if(strcmp(character->getBackpack().getInventory()[index].getClassAsText() , "Belt")==0) {
            character->takeOffEquipment(character->getBackpack().getInventory()[4].getEnchantmentType(),
                                        character->getBackpack().getInventory()[4].getEnchantmentBonus());

            character->getBackpack().getInventory()[index] = character->getCharacterEquipment().equipBelt(
                    (Item *) character->getBackpack().getInventory()[index]);

            character->wearEquipment(character->getBackpack().getInventory()[index].getEnchantmentType(),
                                     character->getBackpack().getInventory()[index].getEnchantmentBonus());

        }else if(strcmp(character->getBackpack().getInventory()[index].getClassAsText() , "Boots")==0) {
            character->takeOffEquipment(character->getBackpack().getInventory()[5].getEnchantmentType(),
                                        character->getBackpack().getInventory()[5].getEnchantmentBonus());

            character->getBackpack().getInventory()[index] = character->getCharacterEquipment().equipBoots(
                    (Item *) character->getBackpack().getInventory()[index]);

            character->wearEquipment(character->getBackpack().getInventory()[index].getEnchantmentType(),
                                     character->getBackpack().getInventory()[index].getEnchantmentBonus());

        }else if(strcmp(character->getBackpack().getInventory()[index].getClassAsText() , "Weapon")==0) {
            character->takeOffEquipment(character->getBackpack().getInventory()[6].getEnchantmentType(),
                                        character->getBackpack().getInventory()[6].getEnchantmentBonus());

            character->getBackpack().getInventory()[index] = character->getCharacterEquipment().equipWeapon(
                    (Item *) character->getBackpack().getInventory()[index]);

            character->wearEquipment(character->getBackpack().getInventory()[index].getEnchantmentType(),
                                     character->getBackpack().getInventory()[index].getEnchantmentBonus());
        }

        cout<<"Change Successfully!";
        character->getCharacterEquipment().printAllEquipment();
        character->printStatus();

    }

}



