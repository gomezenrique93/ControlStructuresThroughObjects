/*
13. Currency
Write a program that will convert U.S. dollar amounts to Japanese yen and to euros,
storing the conversion factors in the constants YEN_PER_DOLLAR and EUROS_PER_
DOLLAR . To get the most up-to-date exchange rates, search the Internet using the
term “currency exchange rate”. If you cannot find the most recent exchange rates, use
the following:
1 Dollar = 98.93 Yen
1 Dollar = 0.74 Euros
Format your currency amounts in fixed-point notation, with two decimal places of
precision, and be sure the decimal point is always displayed.
 */

#include <iostream>
#include <iomanip>

int main() {
    // Variable Section
    double dollars,
    dollars_euros,
    dollars_yen;

    const double EUROS_PER_DOLLAR = 0.74,
    YEN_PER_DOLLAR = 98.93;

    // Input Section
    std::cout << "Enter the amount of money you would like to convert to yen and euros! $ ";
    std::cin >> dollars;

    // Calculation Section
    dollars_euros = dollars * EUROS_PER_DOLLAR;
    dollars_yen = dollars * YEN_PER_DOLLAR;

    // Output Section
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "$ " <<  dollars << " dollars is " << dollars_euros << " Euros " << std::endl;
    std::cout << "$ " << dollars << " dollars is " << dollars_yen << " Yen " << std::endl;
    return 0;
}
