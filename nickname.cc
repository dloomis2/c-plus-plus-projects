#include <iostream>
#include <vector>
#include <string>

bool CheckBingName(std::string input){
  std::cout << std::boolalpha;
  std::string name{};
  std::cout << "Nickname: ";
  std::cin >> name;
  if (name == "bingus") {
    std::cout << "Hello, " << name << '\n';
  } else if (name == "benzo") {
    std::cout << "Hello, " << name << '\n';
  } else if (name == "bing") {
    std::cout << "Hello, " << name << '\n';
  } else if (name == "queen of penguins") {
    std::cout << "Hello, " << name << '\n';
  } else {
    std::cout << "WRONG ";
  }
  return 0;
}

int main() 
{
  //display the memory address of each listed element of primes array
  std::vector<int> primes{2, 3, 5, 7, 11};
  std::cout << "An integer is " << sizeof(int) << " bytes.\n";
  std::cout << &primes[0] << '\n';
  std::cout << &primes[1] << '\n';
  std::cout << &primes[2] << '\n';
  std::cout << &primes[3] << '\n';
  std::vector<std::string> names{"bingus", "benzo", "bing", "queen of penguins"};
  std::cout << "Cinthia's nicknames can be: " << names[0] << " or "
            << names[1] << " or " << names[2] << " or " << 
            names[3] << '\n'; 
  std::string name_choice{CheckBingName("input")};
  /* 
  from 16.2 quiz 1.)
    define a std::vector and initialize it to the
    first five square numbers
    Use CTAD: class type argument deduction
  */
  std::vector<int> squares{1, 4, 9, 16, 25};
  std::cout << squares[0] << '\n' << squares[1] << '\n' << squares[2]
            << '\n' << squares[3] << '\n' << squares[4] << '\n';
  return 0;
}
