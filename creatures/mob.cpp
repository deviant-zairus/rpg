#inlude "mob.h"
#include <iostream>

mob::mob(std::string name, std::string area, std::string special, int level, int expGiven, int health, int maxHealth, int strength, int constitution, int intelligence, int wisdom, int dexterity, int perception)
{
  std::string setName(name);
  std::string setArea(area);
  std::string setSpecial(special);
  int setLevel(level);
  int setExpGiven(expGiven);
  int setMaxHelth(maxHealth);
  int setHealth(maxHealth);
  int setStrength(strength);
  int setConstitution(constitution);
  int setPerception(perception);
  int setDexterity(dexterity);
  int setIntelligence(intelligence);
  int setWisdom(wisdom);
}

//member mutators
void mob::setName(std::string name)
{
  mobName = name;
}
void mob::setArea(std::string area)
{
  mobArea = area;
}
void mob::setSpecial(std::string special)
{
  mobSpecial = special;
}
void mob::setLevel(int level)
{
  mobLevel = level;
}
void mob::setExpGiven(int expGiven)
{
  mobExpGiven = expGiven;
}
void mob::setMaxHealth(int maxHealth)
{
  mobMaxHealth = maxHealth;
}
void mob::setStrength(int strength)
{
  mobStrength = strength;
}
void mob::setConstitution(int constitution)
{
  mobConstitution = constitution;
}
void mob::setPerception(int perception)
{
  mobPerception = perception;
}
void mob::setDexterity(int dexterity)
{
  mobDexterity = dexterity;
}
void mob::setIntelligence(int intelligence)
{
  mobIntelligence = intelligence;
}
void mob::setWisdom(int wisdom)
{
  mobWisdom = wisdom;
}

//member accesors
std::string mob::getName()
{
  return mobName;
}
std::string mob::getArea()
{
  return mobArea;
}
std::string mob::getSpecial()
{
  return mobSpecial;
}
int mob::getLevel()
{
  return mobLevel;
}
int mob::getExpGiven()
{
  return mobExpGiven;
}
int mob::getMaxHealth()
{
  return mobMaxHealth;
}
int mob::getHealth()
{
  return mobHealth;
}
int mob::getStrength()
{
  return mobStrength;
}
int mob::getConstitution()
{
  return mobCostitution;
}
int mob::getPerception()
{
  return mobPerception;
}
int mob::getDexterity()
{
  return mobDexterity;
}
int mob::getIntelligence()
{
  return mobIntelligence;
}
int mob::getWisdom()
{
  return playerWisdom;
}














