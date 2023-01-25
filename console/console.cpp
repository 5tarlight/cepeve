#include "console.h"
#include <cstdio>
#include <iostream>
#include <stdlib.h>

void pretty_str(std::string &str) {
  int inserted = 0;
  // int index = 80 * (inserted + 1) + inserted;
  int index = 80;

  while (str.size() > index) {
    str.insert(index, 1, '\n');

    if (str[index + 1] == ' ') {
      str.erase(index + 1, 1);
    }

    inserted++;
    // index = 80 * (inserted + 1) + inserted;
    index += 81;
  }
}

void print(std::string str) {
  std::string c(str);
  pretty_str(c);
  std::cout << c << RESET;
}
void print(char *str) { print(std::string(str)); }
void print(const char *str) { print(std::string(str)); }
void print(const char *str, const char *o) { print(std::string(o) + str); }
void print(const char *str, const char *o1, const char *o2) {
  print(std::string(o1) + o2 + str);
}
void println() { std::cout << std::endl; }
void println(std::string str) {
  std::string c(str);
  pretty_str(c);
  std::cout << c << RESET << std::endl;
}
void println(char *str) { println(std::string(str)); }
void println(const char *str) { println(std::string(str)); }
void println(const char *str, const char *o) { println(std::string(o) + str); }
void println(const char *str, const char *o1, const char *o2) {
  println(std::string(o1) + o1 + str);
}

void clear(bool wait) {
  if (wait) {
    print("Press ", ITALIC);
    print("enter", ITALIC, SBLUE);
    println(" to continue.", ITALIC);
    getchar();
  }

#if __WIN32__
  system("cls");
#else
  system("clear");
#endif
}
