#include <iostream>
#include <string>
#include <vector>

//#include "structs_functions.h"
//Dont need this header as we have the needed function in here.

struct OS
{
  std::string name;
  double version;
  bool update;
};

bool updateSystem(double version, const std::string& system)
{
  if ((system == "ubuntu") && (version < 24.04)) {
    return true;
  } else if ((system == "macOS") && (version <= 14.00)) {
    return true;
  }
  return false;
}

int main(int argc, char *argv[])
{
  std::vector<std::string> cli{argv, argv + argc};
  
  if (cli.size() != 3) {
    std::cout << "error: need more info" << '\n';
  }

  const std::string name{cli.at(1)};
  double version{std::stod(cli.at(2))};
  
  OS system1;
 system1.name = "ubuntu";
 system1.version = 20.04;
 system1.update = true;
 
  OS system2;
  system2.name = "ubuntu";
  system2.version = 24.04;
  system2.update = false;

  OS system3;
  system3.name = "windows";
  system3.version = 11.24;
  system3.update = false;

  OS system4;
  system4.name = "macOS 14 Sonoma";
  system4.version = 14.00;
  system4.update = true;

  bool needs_update{true};
  
  if(name == "ubuntu") {
    needs_update = updateSystem(version, name);
  } else if (name == "macOS") {
    needs_update = updateSystem(version, name);
  }

  if (needs_update) {
    std::cout << "Needs update" << '\n';
  } else {
    std::cout << "No updates at this time." << '\n';
  }
  
  return 0;
}
