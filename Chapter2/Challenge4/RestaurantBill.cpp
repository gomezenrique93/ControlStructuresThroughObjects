/* Programmer Name: Enrique Gomez
 * Program Date: 4/23/2021
 * Program Version: 1.0
 * Program Description: Restaurant Bill
Write a program that computes the tax and tip on a restaurant bill for a patron with
a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip
amount, and total bill on the screen.

 */
#include <iostream>
#include <iomanip>

int main() {
    // Variable Section
    float bill = 88.67,
    tax = 0.0675,
    tip = .20,
    totalWithTax,
    totalWithBill,
    totalFinal;

    // Calculation Section
    totalWithTax = bill * tax;
    totalWithBill = bill + totalWithTax;
    totalFinal = totalWithBill * tip;
    totalFinal += totalWithBill;

    // Output Section
    std::cout << "The initial bill cost is $" << bill << std::endl;
    std::cout << "The tax amount is " << tax * 100 << "%" << std::endl;
    std::cout << "The tip amount is " << tip * 100 << "%" << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "The total amount is $" << totalFinal << std::endl;
    return 0;
}
