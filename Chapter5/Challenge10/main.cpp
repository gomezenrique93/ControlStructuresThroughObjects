/*
10. Average Rainfall
Write a program that uses nested loops to collect data and calculate the average rainfall
over a period of years. The program should first ask for the number of years. The outer
loop will iterate once for each year. The inner loop will iterate twelve times, once for
each month. Each iteration of the inner loop will ask the user for the inches of rainfall
for that month.
After all iterations, the program should display the number of months, the total inches
of rainfall, and the average rainfall per month for the entire period.
Input Validation: Do not accept a number less than 1 for the number of years. Do not
accept negative numbers for the monthly rainfall.
*/
#include <iostream>

int main() {
    // Variable Section
    int years,
    months = 12,
    total_months,
    monthly_rainfall,
    total_rainfall = 0,
    average_rainfall;

    // User input section for years
    std::cout << "How many years would you like to calculate rainfall for? ";
    std::cin >> years;

    // User input validation section for number of years
    while(years < 1)
    {
       std::cout << "Make sure that you enter a value greater than one ";
       std::cin >> years;
    }

    std::cout << "Rainfall will be measured in inches. " << std::endl;
    for (int i = 1; i <= years; i++)
    {
        std::cout << "--------------\n";
        std::cout << "Year " << i << "\n";
        for (int j = 1; j <= months; j++)
        {
            std::cout << "Month " << j << " : ";
            std::cin >> monthly_rainfall;
            while(monthly_rainfall <= 0)
            {
                std::cout << "Make sure that you enter a value greater than zero!! ";
                std::cin >> monthly_rainfall;
            }
            total_rainfall += monthly_rainfall;
        }
    }
    // Calculation to figure out total months within the period
    total_months = years * months;

    // Calculation to figure out average for the entire period
    average_rainfall = total_rainfall / total_months;

    std::cout << "-----------------------------------------------------\n";
    std::cout << "Total months within the " << years << " year period is " << total_months << " months." << std::endl;
    std::cout << "Total rainfall within the period is " << total_rainfall << " inches. " << std::endl;
    std::cout << "Average rainfall within the period is " << average_rainfall << " inches. " << std::endl;
    std::cout << "-----------------------------------------------------\n";
    return 0;
}
