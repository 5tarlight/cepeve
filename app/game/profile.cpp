#include "profile.h"
#include "console.h"
#include <chrono>
#include <string>
#include <thread>

Player profile::new_profile() {
  println();
  print("Hello. I'm your advisor and captain ");
  print("YEAHx4", GREEN);
  println(".");
  std::this_thread::sleep_for(std::chrono::milliseconds(700));
  print("As a new ");
  print("capsulier", YELLOW);
  println(", you will choose your furture and make it yourself.");
  std::this_thread::sleep_for(std::chrono::milliseconds(700));
  println("In New-Eden, you can create your unique history and no one dare "
          "blames you.");
  std::this_thread::sleep_for(std::chrono::milliseconds(700));
  println("Now, let's start some registration procedures.");
  std::this_thread::sleep_for(std::chrono::milliseconds(700));
  println();

  std::string name = readline(std::string("Let me know your ") + YELLOW +
                              "name" + RESET + ".");
  println();
  unsigned int gender =
      select(std::string("Let me know ") + YELLOW + "who you are" + RESET + ".",
             {"man", "woman"});
  bool male = false;

  if (gender == 0)
    male = true;

  println();
  println(std::string("Which ") + YELLOW + "corporation" + RESET +
          " you will dedicate?");
  unsigned int born = select(
      std::string(DIM) +
          "The things you do is ultimately depends on your choice. Choosing "
          "corporation will only affect your initial locaiton. You can't "
          "change "
          "your background but, you can change your standing regardless of "
          "your "
          "backgroundand you can join any corporation that wants you.",
      {"Caldari (Jita, Moon VII Caldari Navy)",
       "Minmatar (Kekebaba, Minmatar Empire Army)",
       "Amarr (Amarr Newbie School)",
       "Gallente (Gallenti, Gallente Capsulier School)"});

  std::string corp;

  switch (born) {
  case 1:
    corp = "Caldari";
    break;
  case 2:
    corp = "Minmatar";
    break;
  case 3:
    corp = "Amarr";
    break;
  case 4:
    corp = "Gallente";
    break;
  }

  return Player(name, male, corp);
}
