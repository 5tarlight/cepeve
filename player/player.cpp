#include "player.h"

using std::string;

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
