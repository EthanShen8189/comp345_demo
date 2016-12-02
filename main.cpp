#include <iostream>
#include <vector>
#include "Dice/Dice.h"

int main() {

    srand(time(0));

    Dice dice;

    vector<int> result = dice.roll("4d6");

    cout<< result[0];

    return 0;
}