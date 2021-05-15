/*
 * 14. Monthly Sales Tax
A retail company must file a monthly sales tax report listing the sales for the month and
the amount of sales tax collected. Write a program that asks for the month, the year,
and the total amount collected at the cash register (that is, sales plus sales tax). Assume
the state sales tax is 4 percent and the county sales tax is 2 percent.
If the total amount collected is known and the total sales tax is 6 percent, the amount
of product sales may be calculated as:
S = T / 1.06;
S is the product sales and T is the total income (product sales plus sales tax).
The program should display a report similar to
Month: October
--------------------
Total Collected: $ 26572.89
Sales: $ 25068.76
County Sales Tax: $ 501.38
State Sales Tax: $ 1002.75
Total Sales Tax: $ 1504.13
 */
#include <iostream>
#include <iomanip>
#include <string>

int main() {
    // Variable Section
    std::string month;
    int year;
    double state_tax = 0.04,
    county_tax = 0.02,
    total_tax,
    county_total,
    state_total,
    total_income,
    sales;

    // User Input Section
    std::cout << "This program will create a tax report for your specified month!" << std::endl;
    std::cout << "Enter the year: ";
    std::cin >> year;
    std::cout << "Enter the month: ";
    std::cin >> month;
    std::cout << "Enter the total amount collected $: ";
    std::cin >> total_income;

    // Calculation Section

    sales = total_income / 1.06; // Calculates total sales without tax
    county_total = sales * county_tax; // Calculates county sales tax
    state_total = sales * state_tax; // Calculates states sales tax
    total_tax = county_total + state_total; // Calculates sum of county and state tax

    // Output Section
    std::cout << "Month: " << month << "Year: " << year << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Total Collected: $ " << std::setw(6) << total_income << std::endl;
    std::cout << "Sales: $" << std::setw(18) << sales << std::endl;
    std::cout << "County Sales Tax: $ " << std::setw(6) << county_total << std::endl;
    std::cout << "State Sales Tax: $ " << std::setw(6) << state_total << std::endl;
    std::cout << "Total Sales Tax: $ " << std::setw(6) << total_tax << std::endl;
    return 0;
}
