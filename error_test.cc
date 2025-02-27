#include <iostream>

int main(){
  int number{-1};
  std::cout << "Enter a number: ";
  std::cin >> number;
    if (!std::cin) {
      std::cout << "ABORT!!!\n";
      return 1;
    }
  std::cout << "Good job\n";
  return 0;
}
