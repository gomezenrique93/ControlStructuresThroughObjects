/*
10. How Much Insurance?
Many financial experts advise that property owners should insure their homes or buildings
for at least 80 percent of the amount it would cost to replace the structure. Write a
program that asks the user to enter the replacement cost of a building and then displays
the minimum amount of insurance he or she should buy for the property.
 */

#include <iostream>
#include <iomanip>

int main() {
    // Variable Section
    double replacement,
    minimum,
    insurance = 0.80;

    // Input Section
    std::cout << "Enter the cost of replacing your house/building $: ";
    std::cin >> replacement;

    // Calculation Section
    minimum = replacement * insurance;

    // Output Section
    std::cout << std::showpoint << std::fixed << std::setprecision(2);
    std::cout << "The minimum of insurance you should buy is $: " << minimum << std::endl;

    return 0;
}
