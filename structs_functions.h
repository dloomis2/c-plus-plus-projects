#ifndef STRUCTS_FUNCTIONS_
#define STRUCT_FUNCTIONS_

#include <string>
struct OS
{
  std::string name;
  double version;
  bool update;
};
int promptforUpdate(std::string query);
void printInfo(const OS& system);

#endif

