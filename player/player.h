#pragma once
#include <string>

class Player {
public:
  std::string name;
  std::string location; // TODO
  std::string station;
  std::string corp;
  const bool male;
  double sec_lv;
  double isk;
  // TODO SKill System

  Player(std::string name, const bool male, std::string corp);
};
