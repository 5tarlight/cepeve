#include "console.h"
#include "game/profile.h"
#include <iostream>

int main() {
  clear();
  printhello();
  println();

  while (true) {
    int input = select(
        concat_str(YELLOW, "What to do next?"),
        {"Select Profile", "New Profile", "Delete Profile", "Quit"}, true);

    switch (input) {
    case 1:
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
