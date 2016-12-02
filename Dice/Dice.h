#pragma once

#include <stdio.h>
#include <iostream>
#include <regex>
#include <random>
#include <ctime>

using namespace std;

class Dice {
    public:
        Dice();
        ~Dice();
        vector<int> roll(string dice);
};
