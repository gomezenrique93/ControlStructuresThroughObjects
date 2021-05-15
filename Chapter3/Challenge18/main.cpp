/*
18. Interest Earned
Assuming there are no deposits other than the original investment, the balance in a
savings account after one year may be calculated as
Amount = Principal * (1 + Rate / T) T(squared)
Principal is the balance in the savings account, Rate is the interest rate, and T is
the number of times the interest is compounded during a year ( T is 4 if the interest is
compounded quarterly).
Write a program that asks for the principal, the interest rate, and the number of times
the interest is compounded. It should display a report similar to
Interest Rate: 4.25%
Times Compounded: 12
Principal: $ 1000.00
Interest: $ 43.34
Amount in Savings: $ 1043.34
*/

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // Variable Section
    double amount,
    principal,
    rate,
    times_compounded,
    compound_interest;

    // User Input Section
    std::cout << "This program will help calculate principal interest! " << std::endl;
    std::cout << "Enter the principal amount $: ";
    std::cin >> principal;
    std::cout << "Enter the interest rate percentage: ";
    std::cin >> rate;
    std::cout << "Enter the number of times the interest rate is compounded: ";
    std::cin >> times_compounded;

    // Calculation Section
    amount = principal * std::pow((1 + (rate / 100) / times_compounded), times_compounded);
    compound_interest = amount - principal;

    // Formatting Section
    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    // Output Section
    std::cout << "Interest Rate: " << rate << "%" << std::endl;
    std::cout << "Times Compounded: " << times_compounded << std::endl;
    std::cout << "Principal: $ " << principal << std::endl;
    std::cout << "Interest: $ " << compound_interest << std::endl;
    std::cout << "Amount in Savings: $ "<< amount;
    return 0;
}
