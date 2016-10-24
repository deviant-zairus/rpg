#include "player.hpp"

player::player(std::string name, std::string area, std::string weapon, int level = 1, int EXP = 0)
{
	setName(name);
	setArea(area);
	setWeapon(weapon);
	setLevel(level);
	setEXP(EXP);
	setMaxHealth();
	setHealth(playerMaxHealth);
	setDamage();
	setEXPReq();

}
//Member function definitions
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
	playerLevel = level
}
void player::setHealth(int health)
{
	playerHealth = health;
}
void player::setMaxHealth()
{
	playerMaxHealth = (100 * getLevel());
}
void player::setDamage()
{
	playerDamage = (30 * getLevel());
}
void player::setEXP(int _EXP)
{
	EXP = _EXP;
}
void player::setEXPReq()
{
	EXPReq = 70 + ((getLevel() * getLevel() * 35));
}

//Member function constructors
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
int player::getHealth()
{
	return playerHealth;
}
int player::getMaxHealth()
{
	return playerMaxHealth;
}
int player::getDamage()
{
	return playerDamage;
}
int player::getEXP()
{
	return playerEXP;
}
int player::getEXPReq()
{
	return EXPReq;
}
