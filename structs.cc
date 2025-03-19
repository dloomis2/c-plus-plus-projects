#include <iostream>
#include "structs_functions.h"

//utilize structs 
// OS is name of struct






int main(int argc, char **argv)
{
 OS system1;
 system1.name = "ubuntu";
 system1.version = 20.04;
 system1.update = false;
 
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

  int check_prompt{promptforUpdate("Enter your system number: ")};
 
  printInfo(system1); 
  
  //pointer to structs
  //print the memory address of each pointer to the structs
  
  OS *structptr1 = &system1;
  std::cout << &system1 << '\n'; 

  OS *structptr2 = &system2;
  std::cout << &system2 << '\n'; 

  OS *structptr3 = &system3;
  std::cout << &system3 << '\n';
  
  OS *structptr4 = &system4;
  std::cout << &system1 << '\n'; 
  std::cout << &system2 << '\n'; 
  std::cout << &system3 << '\n'; 
  std::cout << &system4 << '\n'; 
 // checkUpdate(system1);
 // checkUpdate(system2);
 // checkUpdate(system3);
 // checkUpdate(system4);

  return 0;
}
