#include "console.h"
#include <iostream>

int main() {
  clear();
  printhello();
  println();

  int input = select(concat_str(YELLOW, "What to do next?"),
                     {"Select Profile", "New Profile", "Delete Profile"});
  println(std::to_string(input));
}
