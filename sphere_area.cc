#include <iostream>
#include "spherearea_functions.h"
/* area of a sphere is calculated by:
A = 4pi(r)^2 
*/
int main(int argc, char* argv[]) {
  std::cout << "Welcome\n";
  int rad{PromptforInt("Enter the radius: ")};
  int ar_sp{SphereArea(rad)};
  std::cout << "The area of the sphere is: "
            << ar_sp << '\n';
  return 0;
}
