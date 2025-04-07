// this file was created by the professor in class
// this program takes input from the user and returns the lowest double value input.

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[])
{
  std::vector<std::string> cl{argv, argv + argc};
  std::vector<double> values;

  bool is_first{true};
  for (std::string arg : cl) {
    if (is_first) {
        is_first = false;
        continue;
    }
    double val{std::stod(arg)};
    values.push_back(val);
  }
if (values.empty()) {
    std::cout << "error: empty vector\n";
    return 1;
}
double min_val{values.at(0)};
for (double val : values) {
    if (min_val > val) {
        min_val = val;
    }
}
std::cout << min_val << '\n';
return 0;
}
