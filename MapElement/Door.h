//
// Created by Ethan Shen on 2016-11-01.
//

#ifndef COMP345_A2_DOOR_H
#define COMP345_A2_DOOR_H

#import <string>
using namespace std;

class Door {
private:
    string name;
    int x_coordinate;
    int y_coordinate;
    bool isLocked;

public:
    Door( string name, int xcoordinate, int ycoordinate, bool isLocked);

     string getName() ;

    void setName( string name);

    int getXcoordinate() ;

    void setXcoordinate(int xcoordinate);

    int getYcoordinate() ;

    void setYcoordinate(int ycoordinate);

    bool isIsLocked() ;

    void setIsLocked(bool isLocked);

    virtual ~Door();
};


#endif //COMP345_A2_DOOR_H
