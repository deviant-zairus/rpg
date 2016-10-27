#include "_mobs.hpp"
#include "_player.hpp"
#include <iostream>
#include <cstdlib>
#include <windows.h>

player battle(pplayer account);
player calcEXP(player account, classMob creature);
player levelUp(player account);
void death();

int main()
{
	std::string name;
	int option1;
	std::cout<<"Welcome, please enter your name\n";
	std::getline(std::cin, name);
	std::string location [4] = {"in a hole","in a cave","in the mountains","in a castle"};
	std::cout<<"\nWelcome"<<account.getName()<<" you find yourself "<<account.getArea()<<" and you're not sure how you got there\n";
	while (1)
	{
		std::this_thread::sleep_for(500);
		std::cout<<"Write 1 to walk forward, 2 to walk left and 3 to walk right \n";
		std::getline(std::cin, option1);
		if (option1 == 1)
		{
			std::this_thread::sleep_for(50*(option1));
			srand(time(NULL));
			if (rand()%3 == option1-1){
				account = battle(account);
			}
		}
		else{
			std::cout<<"ERROR \n\nPlease enter a number between 1 and 3. \n\n";
			std::cin.clear();
			std::cin.ignore();
		}
	}
	return 0;
}

player battle(plater account)
{
	std::string option;
	std::string location[4] = {"in a hole", "in a cave", "in the mountains", "in a castle"};
	std::string monsters[5][3] = {{"worm", "lizzard", "snake"},{"rat", "snake", "trolls"},{"Dragon", "Dragon", "Dragon"},{"Evil knight", "The Mad King", "Dark Prince"}};
	std::this_thread::sleep_for(20);
	int ranM = (rand()%3);
	int ranD = (rand()%5)+1;
	classMob monster(monsters[account.getLevel()-1][ranM],account.getLevel(),account.getArea(),ranD);
	std::cout<<"Suddenly you meet a "<<monster.getName()<<", prepare for battle!\n";
	std::this_thread::sleep_for(2000);
	do
	{
		std::cout<<"\n\n############################################# \n\n HP:"<<account.getHealth()<<"\n\n";
		std::cout<<monster.getName()<<"HP: "<<monster.getHealth()<<" Level: "<<monster.getLevel()<<"\n";
		std::cout<<"Select A for Attack or R for retreat"<<"\n";
		std::cin>>option;
		srand(time(NULL));
		if (option=="R" || option=="r")
		{
			if ((rand()%2) == 1){
				std::cout<<"retreat sucessfull"<<"/n";
				monster.setHealth(0);
			}
			else{
				std::cout<<"You try to run, but it failed. \nThemonster attacks. You lose 5 health. \n";
				account.setHealth(account.getHealth()-5);
				option = "A";
			}
		}
		if (option == "A" || option =="a")
		{
			int attack = rand()%(account.getDamage());
			srand(time(NULL));
			int mobAttack = rand()%(monster.getDamage());
			monster.setHealth(monster.getHealth()-attack);
			account.setHealth(account.getHealth()-mobAttack);
			std::cout<<"You attack the damage for "<<attack<<" damage.\n";
			std::this_thread::sleep_for(500);
			std::cout<<"The monster attacks for "<< mobAttack<<" damage\n";
			std::this_thread::sleep_for(500);
		}
	}
	while (monster.getHealth() > 0 && account.getHealth() > 0);
	std::cout<<"\n\n############################################# \n\n HP:"<<account.getHealth()<<"\n\n";
	std::cout<<monster.getName()<<"HP: "<<monster.getHealth()<<" Level: "<<monster.getLevel()<<"\n";
	if (account.getHealth() <= 0)
	{
		death();
		exit(0);
	}
	account = calcEXP(account,monster);
	return account;
}


void death()
{
	std::cout<< "You have died\n";
}

player calcEXP(player account, classMob monster)
{
	std::cout<<"#######\ncalculating EXP\n########\n";
	std::this_thread::sleep_for(500);
	account.setEXP(account.getEXP() + monster.getEXP());
	std::cout<<"EXP: " << account.getEXP()<<"/"<< account.getEXPReq()<<"\n";
	if (account.getEXP()>=account.getEXPReq())
	{
		levelUp(account);
	}
	return account;
}

					
				       
				       
				       
				       
