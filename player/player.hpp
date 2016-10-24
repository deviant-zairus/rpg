#include <iostream>
#include <vector>

class Player
{
public:
	player(std::string, std::string, std::string, int, int, int);

	void setName(std::string);
	void setArea(std::string);
	void setWeapon(std::string);

	void setLevel(int);
	void setEXP(int);

	void setHealth();
	void setMaxHealth();
	void setDamage();
	void setEXP();
	void setEXPReq();


	std::string getName();
	std::string getArea();

	int getLevel();
	int getHealth();
	int getMaxHealth();
	int getDamage();
	int getEXP();
	int getEXPReq();

private:
	std::string playerName;
	std::string playerArea;
	int playerLevel;
	int playerHealth;
	int playerMaxHealth;
	int playerDamage;
	int EXP;
	int EXPreq;
};
