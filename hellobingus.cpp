#include <iostream>
#include <string>

int main(int argc, char **argv) 
{
  std::cout << "Hello Bingus, have a great day.\n";
  std::string bingusType;
  std::string *bingusPointer = &bingusType;
  std::cout << "Bingus type is stored at: "
	    << &bingusType << '\n';
    return 0;
}
