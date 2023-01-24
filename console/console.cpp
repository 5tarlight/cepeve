#include "console.h"
#include <cstdio>
#include <iostream>
#include <stdlib.h>

void print(std::string str) { std::cout << str << RESET; }
void print(char *str) { std::cout << str; }
void print(const char *str) { std::cout << str; }
void print(const char *str, const char *o) { std::cout << o << str << RESET; }
void print(const char *str, const char *o1, const char *o2) {
  std::cout << o1 << o2 << str << RESET;
}
void println() { std::cout << std::endl; }
void println(std::string str) { std::cout << str << RESET << std::endl; }
void println(char *str) { std::cout << str << std::endl; }
void println(const char *str) { std::cout << str << std::endl; }
void println(const char *str, const char *o) {
  std::cout << o << str << RESET << std::endl;
}
void println(const char *str, const char *o1, const char *o2) {
  std::cout << o1 << o2 << str << RESET << std::endl;
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
