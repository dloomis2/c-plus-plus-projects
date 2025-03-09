#include <iostream> 
#include "spherearea_functions.h"
/* area of a sphere is calculated by:
A = 4pi(r)^2 
*/
int PromptforInt(const std::string& query) {
  std::cout << query;
  int user_input{0};
  std::cin >> user_input;
  return user_input;
}

int SphereArea(int num1) {
    int area{0};
    constexpr int pi = 3.141592653589793;
    if (num1 > 0) {
        area = 4 * pi * pow(num1, 2);
    } 
    return area;
}
