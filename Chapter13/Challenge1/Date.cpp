/*
1. Date
Design a class called Date . The class should store a date in three integers: month , day ,
and year . There should be member functions to print the date in the following forms:
12/25/2014
December 25, 2014
25 December 2014
Demonstrate the class by writing a complete program implementing it.
Input Validation: Do not accept values for the day greater than 31 or less than 1. Do
not accept values for the month greater than 12 or less than 1.
 */

#include <iostream>
#include "Date.h"

int main() {
    //Object #1
    Date format_one;
    format_one.setDay(25);
    format_one.setMonth(12);
    format_one.setYear(2014);



    // Object #2
    Date format_two(25,12,2014);

    // Output Section
    std::cout << format_one.getMonth() << "/" << format_one.getDay() << "/" << format_one.getYear() << std::endl;
    std::cout << format_two.getMonth() << format_two.getDay() << format_two.getYear() << std::endl;
    return 0;
}
