#include "player.h"
#include <iostream>

player::player(std::string name, std::string area, std::string weapon, int level, int exp, int expRequired, int health, int maxHealth, int strength, int constitution, int intelligence, int wisdom, int dexterity, int perception)
{
	std::string setName(name);
	std::string setArea(area);
	std::string setWeapon(weapon);
	int setLevel(level);
	int setExp(exp);
	int setExpRequired(expRequired);
	int setMaxHealth(maxHealth);
	int setHealth(maxHealth);
	int setStrength(strength);
	int setConstitution(constitution);
	int setPerception(perception);
	int setDexterity(dexterity);
	int setIntelligence(intelligence);
	int setWisdom(wisdom);
}

//member mutators
void player::setName(std::string name)
{
	playerName = name;
}
void player::setArea(std::string area)
{
	playerArea = area;
}
void player::setWeapon(std::string weapon)
{
	playerWeapon = weapon;
}
void player::setLevel(int level)
{
	playerLevel = level;
}
void player::setExp(int exp)
{
	playerExp = exp;
}
void player::setExpRequired(int expRequired)
{
	playerExpRequired = (123 * (1 + getLevel()));
}
void player::setMaxHealth(int maxHealth)
{
	playerMaxHealth = (20 + (3 * getConstitution()));
}
void player::setHealth(int health)
{
	playerHealth = health;
}
void player::setStrength(int strength)
{
	playerStrength = strength;
}
void player::setConstitution(int constitution)
{
	playerConstitution = constitution;
}
void player::setPerception(int perception)
{
	playerPerception = perception;
}
void player::setDexterity(int dexterity)
{
	playerDexterity = dexterity;
}
void player::setIntelligence(int intelligence)
{
	playerIntelligence = intelligence;
}
void player::setWisdom(int wisdom)
{
	playerWisdom = wisdom;
}


//member accesors
std::string player::getName()
{
	return playerName;
}
std::string player::getArea()
{
	return playerArea;
}
std::string player::getWeapon()
{
	return playerWeapon;
}
int player::getLevel()
{
	return playerLevel;
}
int player::getExp()
{
	return playerExp;
}
int player::getExpRequired()
{
	return playerExpRequired;
}
int player::getMaxHealth()
{
	return playerMaxHealth;
}
int player::getHealth()
{
	return playerHealth;
}
int player::getStrength()
{
	return playerStrength;
}
int player::getConstitution()
{
	return playerConstitution;
}
int player::getPerception()
{
	return playerPerception;
}
int player::getDexterity()
{
	return playerDexterity;
}
int player::getIntelligence()
{
	return playerIntelligence;
}
int player::getWisdom()
{
	return playerWisdom;
}
