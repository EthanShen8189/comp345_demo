//!
//! Created by Ethan Shen on 2016-09-22.
//!

//! @file
//! @brief Header file for the CharacterAttribute class
//!


#ifndef COMP345_GROUPPROJECT_CHARACTERATTRIBUTE_H
#define COMP345_GROUPPROJECT_CHARACTERATTRIBUTE_H

//! Class that implements a character's attribute
class CharacterAttribute {
private:
    static int intelligence;
    static int wisdom;
    static int strength;
    static int dexterity;
    static int constitution;
    static int charisma;

public:
    CharacterAttribute(int intelligence, int wisdom, int strength, int dexterity, int constitution,
                       int charisma);

    virtual ~CharacterAttribute();

public:
    int getIntelligence() const;

    static void setIntelligence(int intelligence);

    int getWisdom() const;

    static void setWisdom(int wisdom);

    int getStrength() const;

    static void setStrength(int strength);

    int getDexterity() const;

    static void setDexterity(int dexterity);

    int getConstitution() const;

    static void setConstitution(int constitution);

    int getCharisma() const;

    static void setCharisma(int charisma);
};


#endif //COMP345_GROUPPROJECT_CHARACTERATTRIBUTE_H
