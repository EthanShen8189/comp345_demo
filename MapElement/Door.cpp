//
// Created by Ethan Shen on 2016-11-01.
//

#include "Door.h"

Door::Door( string name, int xcoordinate, int ycoordinate, bool isLocked) : name(name), x_coordinate(xcoordinate),
                                                                                  y_coordinate(ycoordinate),
                                                                                  isLocked(isLocked) {}

Door::~Door() {
    delete this;
}

 string Door::getName()  {
    return name;
}

void Door::setName( string name) {
    Door::name = name;
}

int Door::getXcoordinate()  {
    return x_coordinate;
}

void Door::setXcoordinate(int xcoordinate) {
    Door::x_coordinate = xcoordinate;
}

int Door::getYcoordinate()  {
    return y_coordinate;
}

void Door::setYcoordinate(int ycoordinate) {
    Door::y_coordinate = ycoordinate;
}

bool Door::isIsLocked()  {
    return isLocked;
}

void Door::setIsLocked(bool isLocked) {
    Door::isLocked = isLocked;
}
