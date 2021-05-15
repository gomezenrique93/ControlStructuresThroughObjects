/*
13. Circuit Board Price
An electronics company sells circuit boards at a 35 percent profit. Write a program that
will calculate the selling price of a circuit board that costs $14.95. Display the result
on the screen.
 */
#include <iostream>
#include <iomanip>

int main() {
    // Variable Section
    double percentProfit = 0.35,
    cost = 14.95,
    percentCost,
    total;

   // Calculation Section
   percentCost = cost * percentProfit;
   total = cost + percentCost;

   std::cout << std::fixed << std::showpoint << std::setprecision(2);
   std::cout << "The price of the circuit board is $" << total << std::endl;
    return 0;
}
