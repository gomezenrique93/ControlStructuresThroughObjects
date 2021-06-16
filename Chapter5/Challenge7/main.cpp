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
    int days_worked;
    double total_paid;

    // User Input Section
    std::cout << "How many days did you work? ";
    std::cin >> days_worked;

    // Input Validation Section
    while (days_worked < 1)
    {
        std::cout << "Please make sure that your value is greater than 1 \n";
        std::cin >> days_worked;
    }

    // Table Formatting Section
    std::cout << "Day \t Wages" << std::endl;
    std::cout << "----------------" << std::endl;
    for (int i = 1, pennies_total = 1; i <= days_worked; i++, pennies_total *= 2)
    {
        total_paid = pennies_total * PENNIES_VAL;
        std::cout << i << " \t:\t " << "$" << total_paid << "\n";
    }
    return 0;
}
