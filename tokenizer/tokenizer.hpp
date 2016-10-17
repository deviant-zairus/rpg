
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <sstream>

int main()
{
  std::string sentence; 
  getline(std::cin, sentence); //"sentence" will be user input command
  std::stringstream command(sentence); //"command" is the broken down version of "sentence"
  std::istream_iterator<std::string> begin(command); //set begining of iterator for words in "command" 
  std::istream_iterator<std::string> end; //set end of iterator for words in "command"
  std::vector<std::string> parseCommand(begin, end); //sets parsed words from "command" into vector labled "parseCommand"
  std::copy(parseCommand.begin(), parseCommand.end(), std::ostream_iterator<std::string>(std::cout, "\n")); //test line to op "parseCommand"

  return 0;
}
