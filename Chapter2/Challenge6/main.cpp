/*
 *
6. Annual Pay
Suppose an employee gets paid every two weeks and earns $2,200 each pay period.
In a year the employee gets paid 26 times. Write a program that defines the following
variables:
payAmount This variable will hold the amount of pay the employee earns each
pay period. Initialize the variable with 2200.0.
payPeriods This variable will hold the number of pay periods in a year. Initialize
the variable with 26.
annualPay This variable will hold the employee’s total annual pay, which will
be calculated.
The program should calculate the employee’s total annual pay by multiplying the
employee’s pay amount by the number of pay periods in a year and store the result in
the annualPay variable. Display the total annual pay on the screen.

 * */
#include <iostream>
#include <iomanip>

int main() {
    // Variable Section
    double payAmount = 2200.0,
    payPeriods = 26,
    annualPay;

    // Calculation Section
    annualPay = payAmount * payPeriods;

    // Output Section
   std::cout << std::fixed << std::showpoint << std::setprecision(2);
   std::cout << "The employee has a biweekly payment of $" << payAmount << std::endl;
   std::cout << "The total pay periods for the year is $" << payPeriods << std::endl;
   std::cout << "Total annual pay is $" << annualPay << std::endl;
    return 0;
}
