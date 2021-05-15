/*
6. Ingredient Adjuster
A cookie recipe calls for the following ingredients:
• 1.5 cups of sugar
• 1 cup of butter
• 2.75 cups of flour
The recipe produces 48 cookies with this amount of the ingredients. Write a program
that asks the user how many cookies he or she wants to make, and then displays the
number of cups of each ingredient needed for the specified number of cookies.
 */

#include <iostream>
#include <iomanip>

int main() {
    // Variable section
    double sugar = 1.5,
    butter = 1.0,
    flour = 2.75,
    total,
    needed_sugar,
    needed_butter,
    needed_flour,
    needed_ingredients;

    int cookies = 48,
    user_cookies;

    // User Input Section
    std::cout << "How many cookies would you like to make? ";
    std::cin >> user_cookies;

    // Calculation Section
    total = sugar + butter + flour; // This will add up the total amount of ingredients needed for the original recipe
    needed_ingredients = (total * user_cookies) / cookies;
    needed_sugar = needed_ingredients * 0.2857;
    needed_butter = needed_ingredients * 0.1905;
    needed_flour = needed_ingredients * 0.5238;

    // User Output Section
    std::cout << std::fixed << std::setprecision(1) << std::endl;
    std::cout << "In order to make " << user_cookies << " cookies you will need " << needed_sugar
              << " cups of sugar, " << needed_butter << " cups of butter, and " << needed_flour << " cups of flour."
              << std::endl;

    return 0;
}
