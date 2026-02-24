#include <iostream>
#include <iomanip>
#include <string>

//google says a leap year is divisisble by 4, but not by 100 unless it is also divisible by 400
bool LeapYear(int year) {
    return (year %4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int StartingDay (int y) { //This function came from google because I couldn't figure out a way to caculate the first day of each month
   y-=1;
   return (y + y/4 - y/100 + y/400 +1) % 7;

}

int main(){ 
    int year;
    std::cout<<"Enter a year: ";
    std::cin>>year;

    std::string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int NumberOfDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    //Changes 28 days to 29 days for february if it is a leap year
    if(LeapYear(year)){
        NumberOfDays[1]=29;
    }
}


