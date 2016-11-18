
#ifndef _MOB_H
#define _MON_H

#include <iostream>
#include <string>

class mob
{
public:
  	mob(std::string name, std::string area, std::string special, int level, int expGiven, int health, int maxHealth, int strength, int constitution, int intelligence, int wisdom, int dexterity, int perception);
    void setName(std::string);
    void setArea(std::string);
    void setSpecial(std::string);
    void setLevel(int);
    void setExpGiven(int);
    void setHealth(int);
    void setMaxHealth(int);
    void setStrength(int);
    void setConstitution(int);
    void setIntelligence(int);
    void setWisdom(int);
    void setDexterity(int);
    void setPerception(int);
    
    std::string getName();
    std::string getArea();
    std::string getSpecial();
    int getLevel();
    int getExpGiven();
    int getHealth();
    int getStrength();
    int getConstitution();
    int getIntelligence();
    int getWisdom();
    int getDexterity();
    int getPerception();
    
    std::string mobName;
    std::string mobArea;
    std::string mobSpecial;
    int mobLevel;
    int mobExpGiven;
    int mobHealth;
    int mobStrength;
    int mobConstitution;
    int mobIntelligence;
    int mobWisdom;
    int mobDexterity;
    int mobPerception;
    
}

#endif
    
    
    
    
    
