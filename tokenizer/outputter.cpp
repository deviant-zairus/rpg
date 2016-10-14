#include <iostream>
#include <iterator>
#include <string>
#include <vector>


int main();
{
   std::copy(parseCommand.begin(), parseCommand.end(), std::ostream_iterator<std::string>(std::cout, "\n")); //test line to op "parseCommand"
}
