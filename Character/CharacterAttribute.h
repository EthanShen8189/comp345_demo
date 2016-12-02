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
    int intelligence;
     int wisdom;
     int strength;
     int dexterity;
     int constitution;
     int charisma;

public:
    CharacterAttribute(int intelligence, int wisdom, int strength, int dexterity, int constitution,
                       int charisma);
    CharacterAttribute();
    virtual ~CharacterAttribute();
    int getIntelligence() ;
    void setIntelligence(int intelligence);
    int getWisdom() ;
    void setWisdom(int wisdom);
    int getStrength() ;
    void setStrength(int strength);
    int getDexterity() ;
    void setDexterity(int dexterity);
    int getConstitution() ;
    void setConstitution(int constitution);
    int getCharisma() ;
    void setCharisma(int charisma);
};


#endif //COMP345_GROUPPROJECT_CHARACTERATTRIBUTE_H
