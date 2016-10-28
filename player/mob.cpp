#include "mob.hpp"

player::player(std::string name, std::string area, std::string skill, int level = 1, int EXP = 0)
{
  setName(name);
  setArea(area);
  setSkill(skill);
  setLevel(level);
  setEXP(EXP);
  setMaxHealth();
  setHealth(mobMaxHealth);
  setDamage();
}

//Member function definitions
void mob::setName(std::string name)
{
  mobName = name;
}
void mob::setArea(std::string area)
{
  mobArea = area;
}
void mob::setSkill(std::string skill)
{
  mobSkill = skill;
}
void mob::setLevel(int level)
{
  mobLevel = level;
}
void mob::setEXP(int EXP)
{
  mobEXP = (35 * getLevel());
}
void mob::setHealth(int health)
{
  mobHealth = health;
}
void mob::setMaxHealth()
{
  mobMaxHealth = (63 * getLevel());
}
void mob::setDamage()
{
  mobDamage = (10 * getLevel());
}

//Member function constructors
void mob::getName()
{
  return mobName;
}
void mob::getArea()
{
  return mobArea;
}
void mob::getSkill()
{
  return mobSkill;
}
void mob::getLevel()
{
  return mobLevel;
}
void mob::getHealth()
{
  return mobHealth;
}
void mob::getMaxHealth()
{
  return mobMaxhealth;
}
void mob::getDamage()
{
  return mobDamage;
}
void mob::getEXP()
{
  return mobEXP;
}

