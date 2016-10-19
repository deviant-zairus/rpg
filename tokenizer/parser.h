#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <iterator>

//Base object for user command input
class Command
{
  public:
  void setSentence(std::string sentence)
  {
    sentence = s;
  }
  std::string sentence;
  std::stringstream command(sentence); //"command" is the broken down version of "sentence"
  std::istream_iterator<std::string> begin(command); //set begining of iterator for words in "command" 
  std::istream_iterator<std::string> end; //set end of iterator for words in "command"
  std::vector <std::string> parseCommand(begin, end);//sets parsed words from "command" into vector labled "parseCommand"
};



//main function
int main()
{
  
  
  
}


  
  
  
