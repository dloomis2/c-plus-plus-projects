#include <iostream> 
#include <string>
//print quarter, half, 3 quarters at 5, 10, and 15
int main(int argc, char *argv[]){

  for (int i = 1; i <= 20; i++){
      std::cout << i << '\n';
  if (i == 5) {
      std::cout << " quarter\n";
      } else {
	continue;
      }
  if (i == 10) {
      std::cout << " half\n"; 
      } else {
	continue;
      }    
  if (i == 15) {
      std::cout << " 3 quarters\n";
      } else {
      continue;
      }
  return 0;
}

