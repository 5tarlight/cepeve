#pragma once
#include <string>
#include <vector>

// https://wiki.archlinux.org/title/Bash/Prompt_customization#Colors
#define BOLD "\e[1m"
#define DIM "\e[2m"
#define ITALIC "\e[3m"
#define HIGHLIGHT "\e[7m"
#define GREY "\e[30m"
#define GRAY "\e[30m"
#define BG_GRAY "\e[40m"
#define BG_GREY "\e[40m"
#define RED "\e[31m"
#define BG_RED "\e[41m"
#define GREEN "\e[32m"
#define BG_GREEN "\e[42m"
#define YELLOW "\e[33m"
#define BG_YELLOW "\e[43m"
#define BLUE "\e[34m"
#define BG_BLUE "\e[44m"
#define PURPLE "\e[35m"
#define BG_PURPLE "\e[45m"
#define SBLUE "\e[36m" // Sky Blue
#define BG_SBLUE "\e[46m"
#define WHITE "\e[37m"
#define BG_WHITE "\e[47m"
#define RESET "\e(B\e[m"

// char *operator+(const char *str1, const char *str2);

void pretty_str(std::string &str);

void printhello();
void print(std::string str);
void print(char *str);
void print(const char *str);
void print(const char *str, const char *o);
void print(const char *str, const char *o1, const char *o2);
void println();
void println(std::string str);
void println(char *str);
void println(const char *str);
void println(const char *str, const char *o);
void println(const char *str, const char *o1, const char *o2);
void clear(bool wait = false);

[[deprecated("Use std::string(...) + <text> instead")]] std::string
concat_str(std::string a, std::string b);

bool parse_int(std::string &input, int &output);
unsigned int select(std::string title, std::vector<std::string> questions);
unsigned int select(std::string title, std::vector<std::string> questions,
                    bool highlight);
std::string readline(const char *question);
std::string readline(std::string question);