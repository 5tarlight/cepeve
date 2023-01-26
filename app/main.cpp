#include "console.h"
#include "game/profile.h"
#include <iostream>
#include <string>

int main() {
  clear();
  printhello();
  println();

  while (true) {
    int input = select(
        std::string(YELLOW) + "What to do next?",
        {"Select Profile", "New Profile", "Delete Profile", "Quit"}, true);

    switch (input) {
    case 1:
      profile::load_profile();
      break;
    case 2:
      profile::new_profile();
      break;
    case 3:
      break;
    case 4:
      return 0;
    }
  }
}
