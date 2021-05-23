/*
3. Magic Dates
The date June 10, 1960 is special because when we write it in the following format, the
month times the day equals the year.
6/10/60
Write a program that asks the user to enter a month (in numeric form), a day, and a
two-digit year. The program should then determine whether the month times the day is
equal to the year. If so, it should display a message saying the date is magic. Otherwise
it should display a message saying the date is not magic.
 */
#include <iostream>

int main() {
    // Variable Section
    int month,
    day,
    year;

    // User Input Section
    std::cout << "Enter a month, in numeric form: ";
    std::cin >> month;
    std::cout << "Enter a day, in numeric form: ";
    std::cin >> day;
    std::cout << "Enter a year: ";
    std::cin >> year;

    // Comparison Section
    if (year == month * day)
        std::cout << "This date is magic!!!" << std::endl;
    else
        std::cout << "This date is not magic!!!" << std::endl;

    return 0;
}
