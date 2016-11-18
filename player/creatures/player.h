#ifndef _PLAYER_H
#define _PLAYER_H

#include <iostream>
#include <string>


class player
{
public:
	player(std::string name, std::string area, std::string weapon, int level, int exp, int expRequired, int health, int maxHealth, int strength, int constitution, int intelligence, int wisdom, int dexterity, int perception);
	void setName(std::string);
	void setArea(std::string);
	void setWeapon(std::string);
	void setLevel(int);
	void setExp(int);
	void setExpRequired(int);
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
	std::string getWeapon();
	int getLevel();
	int getExp();
	int getExpRequired();
	int getHealth();
	int getMaxHealth();
	int getStrength();
	int getConstitution();
	int getIntelligence();
	int getWisdom();
	int getDexterity();
	int getPerception();

	std::string playerName;
	std::string playerArea;
	std::string playerWeapon;
	int playerLevel;
	int playerExp;
	int playerExpRequired;
	int playerHealth;
	int playerMaxHealth;
	int playerStrength;
	int playerConstitution;
	int playerIntelligence;
	int playerWisdom;
	int playerDexterity;
	int playerPerception;



};

#endif
