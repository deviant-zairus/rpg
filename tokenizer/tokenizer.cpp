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
  std::istream_iterator<std::string> begin(command); //
  std::istream_iterator<std::string> end;
  std::vector<std::string> parseCommand(begin, end);
  std::copy(parseCommand.begin(), parseCommand.end(), std::ostream_iterator<std::string>(std::cout, "\n"));

  return 0;
}
