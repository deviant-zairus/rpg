#ifndef MOB_HPP 
#define MOB_HPP

#include <iostream>

class Mob
{
public:
  mob(std::string, std::string std::string, int, int, int, int);

  void setName(std::string);
  void setArea(std::string);
  void setSkill(std::string);

  void setLevel(int);
  void setEXP(int);
  void setHP(int);
  void setMaxHealth(int);

  void setDamage();
  void setEXP();
  
  std::string getName;
  std::string getArea;

  int getLevel();
  int getEXP();
  int getHP();
  int getMaxHealth();
  int getDamage();
  int getEXP();

private:
  std::string mobName;
  std::string mobArea;
  int mobLevel;
  int mobHealth;
  int mobMaxHealth;
  int mobDamage;
  int mobEXP;
};

#endif



