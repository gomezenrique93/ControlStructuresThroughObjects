/*
9. Change for a Dollar Game
Create a change-counting game that gets the user to enter the number of coins required
to make exactly one dollar. The program should ask the user to enter the number of
pennies, nickels, dimes, and quarters. If the total value of the coins entered is equal to
one dollar, the program should congratulate the user for winning the game. Otherwise,
the program should display a message indicating whether the amount entered was more
than or less than one dollar.
*/
#include <iostream>
#include <iomanip>

int main() {
    // Variable Section
    int dollar = 1,
    num_pennies,
    num_nickels,
    num_dimes,
    num_quarters;
    double total;

    // User Input Section
    std::cout << "Enter the total amount of coins required to make one dollar!!" << std::endl;
    std::cout << "How many num_pennies do you have? ";
    std::cin >> num_pennies;
    std::cout << "How many num_nickels do you have? ";
    std::cin >> num_nickels;
    std::cout << "How many num_dimes do you have? ";
    std::cin >> num_dimes;
    std::cout << "How many num_quarters do you have? ";
    std::cin >> num_quarters;

    // Calculation Section
    total = (num_pennies * 0.01) + (num_nickels * 0.05) + (num_dimes * 0.10) + (num_quarters * 0.25);

    // Formatting Section
    std::cout << std::showpoint << std::fixed << std::setprecision(2);
    if (total > dollar)
       std::cout << "Your total of $" << total << " is greater than $" << dollar << " dollar. " << std::endl;
    else if (total < dollar)
       std::cout << "Your total of $" << total << " is less than $" << dollar << " dollar. " << std::endl;
    else if (total == dollar)
       std::cout << "You have a total of $" << total << " you have won the game!! " << std::endl;
    return 0;
}
