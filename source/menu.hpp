#ifndef "MENU_HPP"
#define "MENU_HPP"
#include <iostream>
#include <vector>
#include <string>



class Menu
{
public:
  Menu(const string &name, const string &prompt, const std::vector<std::pair<string, string>> &choices = std::vector<std::pair<string, string>>{});
  virtual ~Menu();
  const string& getChoice() const;
  bool operator++(const string &name) const;
private:
  static const string menuend;
  string _name, _prompt;
  std::vector<std::pair<string, string>> _choice;
};
