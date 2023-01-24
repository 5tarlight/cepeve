#include "console.h"
#include <iostream>

int main() {
  clear();
  printhello();
  println();

  int input = select(concat_str(YELLOW, "What to do next?"),
                     {"Select Profile", "New Profile", "Delete Profile"});

  switch (input) {
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  }
}
