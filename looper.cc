#include <iostream> 
#include <string>
#include <vector>

//print quarter, half, 3 quarters at 5, 10, and 15i
// ***Updated to progress bars***
// ***Sequence complete at the bottom***

int main(int argc, char *argv[]){
  std::vector<std::string> cmdl{argv, argv + argc};
  std::cout << cmdl.at(0) << '\n';
  std::cout << cmdl.size() << '\n';
  for (int i = 1; i <= 20; i++){
      std::cout << i << " ";
  if (i == 5) {
      std::cout << "  === 25%\n";
      } else if (i == 10) {
      std::cout << " ===== 50%\n"; 
      } else if (i == 15) {
      std::cout << " ======= 75%\n";
      } else if (i == 20) {
      std::cout << "========== 100%\n";
      } else {
	std::cout << "\n";
    }

  }
  std::cout << "Sequence complete.\n";

  return 0;
} 
