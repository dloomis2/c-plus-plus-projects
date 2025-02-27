#include <iostream>
#include <string>

int FoodForWeek(std::string query){
  std::cout << query;
  std::string day;
  std::cin >> day;
  if (day == "mon") {
    std::cout << "Pizza\n";
  } else if (day == "tues") {
    std::cout << "Tacos\n";
  } else if (day == "wed") {
    std::cout << "Ramen\n";
  } else {
    std::cout << "beer and whiskey.\n";
  }
  return 0;
}
//check to see if std::cin contains an int
int main(){
  int number{-1};
  std::cout << "Enter a number: ";
  std::cin >> number;
  if (!std::cin) {
    std::cout << "ABORT!!!\n";
    return 1;
  }
  std::cout << "Your number is " << number << '\n';
  std::string choice_prompt{"Enter a day of the week: "};
  int choice{FoodForWeek(choice_prompt)};
  std::cout << "That means you will eat " << FoodForWeek(choice_prompt)
            << " for lunch today.\n";
  return 0;
}

