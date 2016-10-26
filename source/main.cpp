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
	std::cout<<"Suddenly you meet a 
				       
				       
				       
				       
