/*
11. Automobile Costs
Write a program that asks the user to enter the monthly costs for the following
expenses incurred from operating his or her automobile: loan payment, insurance, gas,
oil, tires, and maintenance. The program should then display the total monthly cost of
these expenses, and the total annual cost of these expenses.
 */
#include <iostream>
#include <iomanip>

int main() {
    double loan_payment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    monthly_costs,
    annual_costs;

    // Input Section
    std::cout << "This program will calculate monthly and yearly automobile expenses! " << std::endl;
    std::cout << "Enter loan payment $: ";
    std::cin >> loan_payment;
    std::cout << "Enter insurance payment $: ";
    std::cin >> insurance;
    std::cout << "Enter gas payment $: ";
    std::cin >> gas;
    std::cout << "Enter oil payment $: ";
    std::cin >> oil;
    std::cout << "Enter tire payment $: ";
    std::cin >> tires;
    std::cout << "Enter maintenance payment $: ";
    std::cin >> maintenance;

    // Calculation Section
    monthly_costs = loan_payment + insurance + gas + oil + tires + maintenance;
    annual_costs = monthly_costs * 12;

    // Output Section
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Total Monthly Costs: $ " << monthly_costs << std::endl;
    std::cout << "Total Yearly Costs: $ " << annual_costs << std::endl;
    return 0;
}
