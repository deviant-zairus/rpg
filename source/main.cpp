#include <cstdlib>
#include <ctime>
#include "game.hpp"

int main()
{
	std::srand(std::time(NULL));

	void road() {
		automenu = std::find(game.begin(), game.end(), "mainroad");
		while (menu != game.end())
			menu = std::find(game.begin(), game.end, menu->getChoice());
		
}
