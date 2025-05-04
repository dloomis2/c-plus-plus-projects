#include <iostream>
#include <string>

// utilize setters and getters with classes 
//exe is date 

class Date{
    private:
        int month_;
        int day_;
        int year_;
    public:
        Date(int month, int day, int year) : month_{month}, day_{day}, year_{year}{};
        ~Date() {};
    
        int getMonth() const {return month_;}
        void setMonth(int month) {month_ = month;}

        int getDay() const {return day_;}
        void setDay(int day) {day_ = day;}

        int getYear() const {return year_;}
        void setYear(int year) {year_ = year;}

};

int main(int argc, char *argv[]) {
  Date d{0,0,0};
  d.setDay(3);
  d.setMonth(5);
  d.setYear(2025);
  std::cout << d.getMonth() << "/" << d.getDay() << "/" 
                            << d.getYear() << '\n';
  return 0;
}