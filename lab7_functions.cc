#include "parking_functions.h"

#include <string>

bool CanParkOnAsh(const std::string& day, int hour) {
  if ((day == "wed") && (hour >= 10) && (hour < 12)){
    return false;
  }
  return true;
}

bool CanParkOnBeech(const std::string& day, int hour) {
  if ((day == "fri") && (hour >= 8) && (hour < 12)){
    return false;
  }
  return true;
}

bool CanParkOnCedar(const std::string& day, int hour) {
  
  if (hour >=19 || hour < 7) {
    return false;
  }

  if ((day == "tue") && (hour >= 8) && (hour < 10)) {
    return false;
  }
  return true;
}

bool CanParkOnDate(const std::string& day, int hour, int min) {
    if ((day == "sat") || (day == "sun") || (hour < 6) ||
        (hour == 6 && min < 30) || (hour >= 16)) {
      return true;
    }
  return false;
}
