//
// Created by Ethan Shen on 2016-11-01.
//

#ifndef COMP345_A2_MONSTER_H
#define COMP345_A2_MONSTER_H
#include <string>
using namespace std;

class Monster {
private:
    int level;
    int hitPoint;
    int damagePoint;
public:
    Monster(int level, int hitPoint, int damagePoint);

    int getLevel() const;

    void setLevel(int level);

    int getHitPoint() const;

    void setHitPoint(int hitPoint);

    int getDamagePoint() const;

    void setDamagePoint(int damagePoint);

    virtual ~Monster();
};


#endif //COMP345_A2_MONSTER_H
