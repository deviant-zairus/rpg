#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include "game.hpp"

int main()

{

	//Tokenizer to split commands
	std::std::vector<std::string> words;
	std::string sentence;
	getline(cin, sentence);
	boost::split(words, sentence, boost::is_any_of(", "), boost::token_compress_on);

}
