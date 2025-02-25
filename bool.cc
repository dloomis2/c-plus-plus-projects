#include <iostream>

//practice with bool types
bool IsEven(int number){
    bool answer{false};
    answer = (number % 2) == 0;
    return answer;
}

bool IsEqual(int x, int y){
  //returns true if x equals y
  return x == y;
}
  //call bool functions listed above
int main(){
  std::cout << "Is your number even? \n";
  std::cout << "Enter a number: ";
  int test_numb{IsEven(0)};
  std::cin >> test_numb;
  std::cout << std::boolalpha;
  std::cout << "It is " << IsEven(test_numb) << " that " 
            << test_numb << " is an even number.\n";
  '\n';
  //call the IsEqual function
  std::cout << "Now we will determine if 2 numbers are equal\n";
  std::cout << "Enter your first number: ";
  int a{IsEqual(1,0)};
  std::cin >> a;
  std::cout << "Enter your second number: ";
  int b{IsEqual(0,1)};
  std::cin >> b;
  if (a == b){
    std::cout << a << " is equal to " <<  b;
  }
  else{
    std::cout << a << " is not equal to " << b;
  }


  return 0;
}
