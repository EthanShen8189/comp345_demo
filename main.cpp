#include <iostream>
#include "Dice/Dice.h"
#include "Driver/CharacterDriver.h"
#include "Driver/CombatDriver.h"
#include "Driver/MapElementDriver.h"

int main() {

    CharacterDriver characterDriver = CharacterDriver();
    CombatDriver combatDriver = CombatDriver();
    MapElementDriver mapElementDriver = MapElementDriver();

    int flag = -1;
    while(flag != 0){
        cout<<"Please choose action for demo:";
        cout<<"1. Save/Load/Create Character"<< endl
            <<"2. Combat Demo"<< endl
            <<"3. Save/Load/Create Map Elements"<< endl
            <<"0. Terminate";

        cin>>flag;
        if(flag == 1){
            characterDriver.run();
        }else if(flag == 2){
            combatDriver.run();
        }else if(flag ==3){
           mapElementDriver.run();
        }else if(flag == 0){
            break;
        }else{
            flag = -1;
            cout<<"Please enter an integer between 1-3";
        }
    }

    return 0;
}