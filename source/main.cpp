#include <cstdlib>
#include <ctime>
#include "game.hpp"

int main()
{
	std::srand(std::time(NULL));

	Game game;
	game.play();
}
