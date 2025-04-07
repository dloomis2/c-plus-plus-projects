#include <iostream>
#include <string>
#include <vector>

class Person{
private:
  public:
    std::string first_name;
    std::string last_name;
    char first_init;
    int phone_number;
    int age;
    int id_number;
  void printName() {std::cout << first_name << " " << last_name << '\n';}
};

int main(int argc, char *argv[])
{
  Person bingus;
  bingus.first_name = "Cinthia";
  bingus.last_name = "Castillo";
  bingus.printName();
  bingus.id_number = 5408048;
  std::cout.unsetf(std::ios::dec);
  std::cout.setf(std::ios::hex);
  std::cout << bingus.id_number << '\n';

  Person david;
  david.first_name = "david";
  david.last_name = "loomis";
  david.printName();
  david.id_number = 60050381;
  std::cout << david.id_number << '\n';
  
  Person olive;
  olive.first_name = "olive";
  olive.last_name = "dawg";
  olive.printName();
  olive.id_number = 42069;
  std::cout << olive.id_number << '\n';

  Person ding;
  ding.first_name = "russ";
  ding.last_name = "man";
  ding.printName();
  ding.id_number = 6792;
  std::cout << ding.id_number << '\n';

  //looking to create a vector and iterate through all group ID numbers.

  return 0;
}
