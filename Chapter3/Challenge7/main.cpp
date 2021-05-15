/*
7. Box Office
A movie theater only keeps a percentage of the revenue earned from ticket sales. The
remainder goes to the movie distributor. Write a program that calculates a theater’s
gross and net box office profit for a night. The program should ask for the name of the
movie, and how many adult and child tickets were sold. (The price of an adult ticket is
$10.00 and a child’s ticket is $6.00.) It should display a report similar to
Movie Name: “Wheels of Fury”
Adult Tickets Sold: 382
Child Tickets Sold: 127
Gross Box Office Profit: $ 4582.00
Net Box Office Profit: $ 916.40
Amount Paid to Distributor: $ 3665.60

Note: Assume that the theater keeps 20% of the gross box office products.
 */
#include <iostream>
#include <string>
#include <iomanip>

int main() {
    // Variable Section
    std::string movie_title;
    int adult_tickets_sold,
    child_tickets_sold;
    double adult_tickets_cost = 10.00,
    child_tickets_cost = 6.00,
    gross_percentage = 0.80,
    net_percentage = 0.20,
    gross_profit,
    net_profit,
    distributor_profit;

    // User Input Section
    std::cout << "Enter the name of the movie: ";
    std::getline(std::cin, movie_title);
    std::cout << "How many adult tickets were sold? ";
    std::cin >> adult_tickets_sold;
    std::cout << "How many child tickets were sold? ";
    std::cin >> child_tickets_sold;

    // Calculation Section
    gross_profit = (adult_tickets_sold * adult_tickets_cost) + (child_tickets_sold * child_tickets_cost);
    net_profit = gross_profit * net_percentage;
    distributor_profit = gross_profit * gross_percentage;

    // Output Section
    std::cout << std::fixed << std::showpoint << std::setprecision(2) << std::endl;
    std::cout << "Movie Name: " << movie_title << std::endl;
    std::cout << "Adult Tickets Sold: " << adult_tickets_sold << std::endl;
    std::cout << "Child Tickets Sold: " << child_tickets_sold << std::endl;
    std::cout << "Gross Profit $ " << gross_profit << std::endl;
    std::cout << "Net Profit $ " << net_profit << std::endl;
    std::cout << "Distributor Profit $ " << distributor_profit << std::endl;
    return 0;
}
