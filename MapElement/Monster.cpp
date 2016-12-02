//
// Created by Ethan Shen on 2016-11-01.
//

#include "Monster.h"

Monster::Monster(int level, int hitPoint, int damagePoint) : level(level), hitPoint(hitPoint), damagePoint(damagePoint) {}


Monster::~Monster() {
    delete this;
}

int Monster::getLevel() const {
    return level;
}

void Monster::setLevel(int level) {
    Monster::level = level;
}

int Monster::getHitPoint() const {
    return hitPoint;
}

void Monster::setHitPoint(int hitPoint) {
    Monster::hitPoint = hitPoint;
}

int Monster::getDamagePoint() const {
    return damagePoint;
}

void Monster::setDamagePoint(int damagePoint) {
    Monster::damagePoint = damagePoint;
}
