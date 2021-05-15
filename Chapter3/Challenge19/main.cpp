/*
 *19. Monthly Payments
The monthly payment on a loan may be calculated by the following formula:
Payment = Rate *(1 + Rate)N(squared)
          ---------------------
          ((1 + Rate)N (squared) - 1) * L
Rate is the monthly interest rate, which is the annual interest rate divided by 12. (12%
annual interest would be 1 percent monthly interest.) N is the number of payments, and
L is the amount of the loan. Write a program that asks for these values and displays a
report similar to
Loan Amount: $ 10000.00
Monthly Interest Rate: 1%
Number of Payments: 36
Monthly Payment: $ 332.14
Amount Paid Back: $ 11957.15
Interest Paid: $ 1957.15
 */
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // Variable Section
    double annual_rate,
    monthly_rate,
    loan,
    payment,
    amount_paid,
    interest_paid;
    int num_payments;

    // Input Section
   std::cout << "This program will help you calculate the monthly payment on a loan!!" << std::endl;
   std::cout << "Enter your loan amount: $ ";
   std::cin >> loan;
   std::cout << "Enter your annual interest rate: % ";
   std::cin >> annual_rate;
   std::cout << "Enter the number of payments: ";
   std::cin >> num_payments;

   // Calculation Section
   monthly_rate = annual_rate / 100 / annual_rate;
   payment = (monthly_rate * pow(1 + monthly_rate, num_payments) / (pow(1 + monthly_rate, num_payments) - 1)) * loan;
   amount_paid = payment * num_payments;
   interest_paid = amount_paid - loan;

   // Output Section
   std::cout << std::fixed << std::setprecision(2);
   std::cout << "----------------------------------------" << std::endl;
   std::cout << "Loan Amount: $ " << loan << std::endl;
   std::cout << "Monthly Interest Rate : " << monthly_rate * 100 << "% " << std::endl;
   std::cout << "Number of Payments : " << num_payments << std::endl;
   std::cout << "Monthly Payments: $ " << payment << std::endl;
   std::cout << "Amount Paid Back: $ " << amount_paid  << std::endl;
   std::cout << "Interest Paid: $ " << interest_paid << std::endl;
    return 0;
}
