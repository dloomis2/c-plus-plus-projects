#include <iostream>
#include <iomanip>
#include <vector>

// executable is 2dvector

int main(int argc, char **argv)
{
  //1-D vector: 2 elements of value 99
  std::cout << "One row of integers: \n";
  std::vector<int> v1D(2, 99);
  for (auto i : v1D) {
    std::cout << std::setw(3) << i << " ";
  }
  std::cout << std::endl;

    std::cout << '\n';

  //5x2 matrix:
  std::cout << "5 x 2 matrix: \n";
  std::vector<std::vector<int>> v(5, std::vector<int>(2, 1));
  for (auto i : v) {
    for (auto j : i) {
        std::cout << std::setw(3) << j << " ";             
    }
    std::cout << std::endl;
  }
    std::cout << '\n';
  /*With this information, we can see how these vectors work and how to construct
    one*/
  std::cout << "Test: \n";
  int num_col = 2;
  int num_row = 3;
  std::vector<int> v_columns(num_row, 8);                                           //Expected Result: 8   8
  std::vector<std::vector<int>> v_rows(num_row, v_columns);                         //                 8   8
  for (auto i : v_rows) {                                                           //                 8   8
    for (auto j : i) {
        std::cout << std::setw(3) << j << " ";                                      //Actual Result:   8   8   8
    }                                                                               //                 8   8   8
    std::cout << std::endl;                                                         //                 8   8   8
  }
    std::cout << '\n';
  //Vector of chars:
  std::vector<char> v_char(2, '&');
  for (const char& c : v_char) {
    std::cout << std::setw(3) << c << " ";
  }
  std::cout << std::endl;
  return 0;
}
