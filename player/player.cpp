#include "player.h"
#include <filesystem>
#include <fstream>
#include <iostream>

using std::string;
namespace fs = std::filesystem;

fs::path Player::profile_path("./data/profile");

Player::Player(string name, const bool male, string corp)
    : name(name), corp(corp), male(male), sec_lv(0.0), isk(5000.0) {
  if (corp == "Caldari") {
    location = "Jita";
    station = "Moon VII Caldari Navy";
  } else if (corp == "Minmatar") {
    location = "Kekebaba";
    station = "Minmatar Empire Army";
  } else if (corp == "Amarr") {
    location = "Amey";
    station = "Amarr Newbie School";
  } else if (corp == "Gallente") {
    location = "Galleti";
    station = "Gallente Capsulier School";
  }
}

void Player::mkdirs() {
  if (!fs::exists(Player::profile_path)) {
    fs::create_directories(Player::profile_path);
  }
}

void Player::save_player(Player &p) {
  mkdirs();

  std::ofstream file_obj;
  file_obj.open(Player::profile_path / fs::path(p.name), std::ios::app);
  file_obj.write((char *)&p, sizeof(p));
  file_obj.close();
}
