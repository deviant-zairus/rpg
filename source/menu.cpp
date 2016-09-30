#include "menu.hpp"
#include <iostream>
#include <vector>



Menu::Menu(const string &name, const string &prompt, const std::vector<std::pair<string,string>> &choices) : _name(name), _prompt(prompt), _choices(choices)
{}

bool Menu::operator==(const string &name) const
{
  return name==_name;
}

const string& Menu::getChoice() const
{
  if (_choices.size() == 0)
  {
    cout << _prompt;
    return menuend;
  }
  unsigned choice;
  int i;
  do {
    cout << _prompt;
    i = 1;
    for (auto ch :  _choices)
      cout << i++ << ": " << ch.first << '\n';
    cin >> choice;
    --choice;
  }
  while (choice >= _choices.size());
  return _choices[choice].second;
}

Menu::~Menu()
{}

const string Menu::menuend{"END"};
