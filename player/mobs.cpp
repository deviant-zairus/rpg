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
void::
  
