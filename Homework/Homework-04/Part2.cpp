#include <iostream>
#include <iomanip>
#include <string>

bool LeapYear(int year) {
    if (year % 4 == 0 && year %100 != 0) {
        return true;
    } else if (year %4 ==0 && year %100 !=0 && year %400 == 0){
        return true;
    } else {
        return false;
    }
}

