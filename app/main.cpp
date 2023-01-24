#include "console.h"
#include <iostream>

int main() {
  clear();
  printhello();
  println();

  select("What to do next?",
         {"Select Account", "New Profile", "Delete Account"});
}
