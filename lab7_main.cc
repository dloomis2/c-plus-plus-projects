
#include <iostream>
#include <string>
#include <vector>

#include "parking_functions.h"

int main(int argc, char* argv[]) {
  std::vector<std::string> command_line{argv, argv + argc};

  if (command_line.size() != 5){
    std::cout << "error: you must supply four arguments" << '\n';
    return 1;
  }
  
  const std::string& street{command_line.at(1)};
  const std::string& day{command_line.at(2)}; 
  const int& hour{std::stoi(command_line.at(3))};
  const int& min{std::stoi(command_line.at(4))};

  if (street != "ash" && street != "beech" && street != "cedar"
                      && street != "date") {
    std::cout << "error: invalid street" << '\n';
    return 1;
  }

  if (day != "mon" && day != "tue" && day != "wed" && day != "thu"
                   && day != "fri" && day != "sat" && day != "sun") {
    std::cout << "error: invalid day" << '\n';
    return 1;
  }

  if ((hour < 0) || (hour > 23)) {
    std::cout << "error: invalid hour" << '\n';
    return 1;
  }

  if ((min < 0) || (min > 59)){
    std::cout << "error: invalid minute" << '\n';
    return 1;
  }

  bool can_park{false};

  if (street == "ash") {
    can_park = CanParkOnAsh(day, hour);
  } else if (street == "beech") {
    can_park = CanParkOnBeech(day, hour);
  } else if (street == "cedar") {
    can_park = CanParkOnCedar(day, hour);
  } else {
    can_park = CanParkOnDate(day, hour, min);
  }

  if(can_park){
    std::cout << "allowed" << '\n';
  }
  if(!can_park){
  std::cout << "not allowed" << '\n';
  }
  return 0;
}
