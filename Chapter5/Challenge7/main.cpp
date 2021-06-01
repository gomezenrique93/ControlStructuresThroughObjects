/*
7. Pennies for Pay
Write a program that calculates how much a person would earn over a period of time
if his or her salary is one penny the first day and two pennies the second day, and continues
to double each day. The program should ask the user for the number of days.
Display a table showing how much the salary was for each day, and then show the
total pay at the end of the period. The output should be displayed in a dollar amount,
not the number of pennies.
Input Validation: Do not accept a number less than 1 for the number of days worked.
 */
#include <iostream>

int main() {
    const double PENNIES_VAL = 0.01;
    int days_worked,
    pennies_total;

    std::cout << "How many days did you work? ";
    std::cin >> days_worked;

    for (int i = 1, penniesTotal = 1; i <= days_worked; i++, penniesTotal++) {
        std::cout << i << " " << (penniesTotal *= 2) << "\n";
    }

    return 0;
}
