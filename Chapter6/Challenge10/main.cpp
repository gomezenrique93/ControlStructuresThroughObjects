/*10. Future Value
Suppose you have a certain amount of money in a savings account that earns compound
        monthly interest, and you want to calculate the amount that you will have after a specific
        number of months. The formula, which is known as the future value formula, is:
F = P x (1 + i) ^ t
        The terms in the formula are as follows:
• F is the future value of the account after the specified time period.
• P is the present value of the account.
• i is the monthly interest rate .
• t is the number of months .
Write a program that prompts the user to enter the account’s present value, monthly
        interest rate, and the number of months that the money will be left in the account. The
        program should pass these values to a function named futureValue that returns the
future value of the account, after the specified number of months. The program should
        display the account’s future value.
*/
#include <iostream>
#include <cmath>
#include <iomanip>

double futureValue(double &, double &, int &);

int main() {
    // Variable Section
    double future,
    present,
    interest;
    int time;

    // User Input Section
    std::cout << "Enter the amount of money that you currently have in your account: ";
    std::cin >> present;
    std::cout << "Enter your monthly interest rate: ";
    std::cin >> interest;
    std::cout << "Enter the number of months that the money will be left in the account: ";
    std::cin >> time;

    // Calling function futureValue
    futureValue(present, interest, time);
    future = futureValue(present, interest, time);

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "The accounts future value is $" << future;
    return 0;
}

double futureValue(double &p, double &i, int &t) {
    return p * pow((1 + (i / 100)), t);
}