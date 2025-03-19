#include <iostream>
#include "structs_functions.h"

int promptforUpdate(std::string query)
{
 
  std::cout << query;
  int answer{0};
  std::cin >> answer;
  std::cout << answer;
  return answer;
}

void printInfo(const OS& system) {
    std::cout << "Name: " << system.name << std::endl;
    std::cout << "Version: " << system.version << std::endl;
  }

