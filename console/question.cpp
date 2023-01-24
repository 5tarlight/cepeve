#include "console.h"
#include <cstdio>
#include <iostream>
#include <stdexcept>

using std::string;
using std::vector;

std::string concat_str(std::string a, std::string b) {
  string str = a + b;
  return str;
}

bool parse_int(string &input, int &output) {
  try {
    output = std::stoi(input);
  } catch (std::exception) {
    return false;
  }

  return true;
}

unsigned int select(string title, vector<string> questions) {
  println(title);
  for (int i = 0; i < questions.size(); i++) {
    string str = std::to_string(i + 1) + ". " + questions[i];
    println(str);
  }

  string input;
  int output = -1;

  do {
    print("> ", GREEN);
    getline(std::cin, input);
  } while (!parse_int(input, output) ||
           !(output > 0 && output <= questions.size()));

  return output;
}
