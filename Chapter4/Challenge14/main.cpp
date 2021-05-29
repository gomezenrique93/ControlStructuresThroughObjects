/*
14. Bank Charges
A bank charges $10 per month plus the following check fees for a commercial checking
account:
$.10 each for fewer than 20 checks
$.08 each for 20–39 checks
$.06 each for 40–59 checks
$.04 each for 60 or more checks
The bank also charges an extra $15 if the balance of the account falls below $400 (before
any check fees are applied). Write a program that asks for the beginning balance and the
number of checks written. Compute and display the bank’s service fees for the month.
Input Validation: Do not accept a negative value for the number of checks written. If a
negative value is given for the beginning balance, display an urgent message indicating
the account is overdrawn.
 */
#include <iostream>
#include <iomanip>

int main() {
    // Variable Section
    double w = 0.10, // 10 cent fee for each check when less than 20 checks are used
    x = 0.08, // 8 cent fee for each check when 20 - 39 checks are used
    y = 0.06, // 6 cent fee for each check when 40 - 59 checks are used
    z = 0.04, // 4 cent fee for each check when 60 or more checks are used
    balance, // collects the users current balance
    monthlyCHARGE = 10.0, // The bank charges $10 a month to have the bank account open
    extraCHARGE = 15.0,   // If the account is under $400 the bank charges an additional fee of $15
    checksWritten, // collects the amount of checks written by the user
    totalBalance; // Holds the total amount of monthly service fee

    // States the purpose of the program
    std::cout << "This program will calculate your average monthly charge for your banks service fees. \n";

    // Collects user information
    std::cout << "What is your beginning balance? ";
    std::cin >> balance;

    // If the user enters a negative balance the program will alert that the account is overdrawn and will ask a user for more funds
    while (balance <= 0) {
        std::cout << "YOUR ACCOUNT IS OVERDRAWN!! ADD MONEY TO YOUR ACCOUNT NOW!! \n";
        std::cout << "How much will you be adding? ";
        std::cin >> balance;
    }

    // Asks the user how many checks they wrote
    std::cout << "How many checks did you write? ";
    std::cin >> checksWritten;

    // This while loop prevents the user from entering a negative value for checks.
    while (checksWritten <= 0) {
        std::cout << "EXCUSE ME SIR, IT'S IMPOSSIBLE TO WRITE A NEGATIVE AMOUNT OF CHECKS!! \n";
        std::cout << "How many checks did you write? ";
        std::cin >> checksWritten;
    }


    // checks to see if the balance is less than 400 dollars to determine if $15 fee will be applied
    if (balance < 400)
        balance = balance + extraCHARGE;

    // checks to see how many checks the user has written and calculates the total amount of checks written
    if (checksWritten < 20)
        checksWritten *= w;
    else if (checksWritten <= 39 && checksWritten >= 20)
        checksWritten *= x;
    else if (checksWritten <= 59 && checksWritten >= 40)
        checksWritten *= y;
    else if (checksWritten >= 60)
        checksWritten *= z;

    // Calculates the grand total of monthly service fees
    totalBalance = checksWritten + monthlyCHARGE + balance;

    std::cout << "Your total account balance with monthly service fees is $ " << std::setprecision (2) << std::fixed << totalBalance;
    return 0;
}
