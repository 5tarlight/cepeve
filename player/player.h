#pragma once
#include <filesystem>
#include <string>
#include <vector>

class Player {
private:
  std::filesystem::path static profile_path;
  void static mkdirs();

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

  void static save_player(Player &p);
  // void static load_player(std::string name);
  // std::vector<std::string> static load_names();
};
