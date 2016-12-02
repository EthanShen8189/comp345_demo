//
// Created by Ethan Shen on 12/1/2016.
//

#include "CharacterDriver.h"
#include "../SaveManager/SaveManager.h"

void CharacterDriver::run() {
    int flag = -1;
    Fighter * fighter =new Fighter();
    while(flag != 0){
            cout<<"Please choose action for demo:";
            cout<<"1. Create and save a new player"<< endl
                <<"2. Level up an existing player"<< endl
                <<"3. Load a player from file"<< endl
                <<"0. Go back";

            cin>>flag;
            if(flag == 1){
               createNewPlayer();
            }else if(flag == 2){
               playerLevelUp(fighter);
            }else if(flag ==3){
                string playerfile = "../SaveManager/SavedFiles/Player.xml";
                loadPlayer(playerfile, fighter);
            }else if(flag == 0){
                delete fighter;
                break;
            }else{
                flag = -1;
                cout<<"Please enter an integer between 1-3";
            }
    }


}

void CharacterDriver::createNewPlayer() {
    PlayerBuilder playerBuilder = PlayerBuilder();
    Character * player = new Fighter();
    int flag = 0;
    do{
    cout<<"Hello Stranger, Choose your Fighter type to start your journey.";
    cout<<"1. Bully"<< endl
        <<"2. Nimble"<< endl
        <<"3.Tank"<< endl;

    cin>>flag;
        if(flag == 1){
            player->setType("Bully");
        }else if(flag == 2){
            player->setType("Nimble");
        }else if(flag ==3){
            player->setType("Tank");
        }else{
            flag = -1;
            cout<<"Please enter an integer between 1-3";
        }
    }while(flag == -1);

    cout<<"Creating Character............";

    playerBuilder.buildNewPlayer(player);

    cout<<"Done!";

    player->printStatus();

    cout<<"Do you want to save this Fighter to file? 0:No, 1:Yes";
    cin>>flag;
    if(flag==1){
        savePlayer(player);
    }else{
        cout<<"Player deleted, Bye!";
    }

    delete player,playerBuilder;

}

void CharacterDriver::playerLevelUp(Fighter *fighter) {
    PlayerBuilder playerBuilder = PlayerBuilder();
    cout<<"Congratulation! You've level up!";
    fighter->incrementLevel();
    playerBuilder.buildPlayingPlayer(fighter);
    fighter->printStatus();

    delete playerBuilder;
}

void CharacterDriver::savePlayer(Character *fighter) {
    SaveManager saveManager = SaveManager();
    cout<<"Saving Player......";
    saveManager.savePlayer(fighter);

    cout<<"Done!";
}

void CharacterDriver::loadPlayer(string file, Character *character) {
    PlayerBuilder playerBuilder =  PlayerBuilder();
    playerBuilder.loadPlayer(file, character);

}
