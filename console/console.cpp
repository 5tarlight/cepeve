#include <console.h>
#include <cstdio>
#include <iostream>

void print(const char *str) { std::cout << str; }
void print(const char *str, const char *o) { std::cout << o << str << RESET; }
void print(const char *str, const char *o1, const char *o2) {
  std::cout << o1 << o2 << str << RESET;
}
void println(const char *str) { std::cout << str << std::endl; }
void println(const char *str, const char *o) {
  std::cout << o << str << RESET << std::endl;
}
void println(const char *str, const char *o1, const char *o2) {
  std::cout << o1 << o2 << str << RESET << std::endl;
}
