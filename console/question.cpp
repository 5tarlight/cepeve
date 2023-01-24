#include "console.h"
#include <cstdio>

using std::string;
using std::vector;

std::string concat_str(std::string a, std::string b) {
  string str = a + b;
  return str;
}

unsigned int select(string title, vector<string> questions) {
  println(title);
  for (int i = 0; i < questions.size(); i++) {
    string str = std::to_string(i + 1) + ". " + questions[i];
    println(str);
  }
  print("> ", GREEN);
  getchar();

  return 1;
}
