#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::std::vector<std::string> words;
	std::string sentence;
	boost::split(words, sentence, boost::is_any_of(", "), boost::token_compress_on);
}
