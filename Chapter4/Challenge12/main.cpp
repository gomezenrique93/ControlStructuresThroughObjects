/*
12. Software Sales
A software company sells a package that retails for $99. Quantity discounts are given
according to the following table.
Quantity Discount
10–19 20%
20–49 30%
50–99 40%
100 or more 50%
Write a program that asks for the number of units sold and computes the total cost of
the purchase.
Input Validation: Make sure the number of units is greater than 0.
*/
#include <iostream>
#include <iomanip>

int main() {
    // Variable Section
    const double PCKG_PRICE = 99.0,
    DSCT_50 = 0.50,
    DSCT_40 = 0.40,
    DSCT_30 = 0.30,
    DSCT_20 = 0.20;
    int pckg_quantity;
    double total,
    fnl_total;

    // User Input Section
    std::cout << "How many software packages do you want to buy? ";
    std::cin >> pckg_quantity;

    // Calculation Section
    total = PCKG_PRICE * pckg_quantity;

    // Formatting Section
    std::cout << std::fixed << std::showpoint << std::setprecision(2) << std::endl;

    // Decision Tree Section
    if (pckg_quantity <= 0)
       std::cout << "Make sure the number of units is greater than zero" << std::endl;
    else if (pckg_quantity >= 10)
    {
        if (pckg_quantity >= 100)
        {
            fnl_total = total * DSCT_50;
            std::cout << "Your final total, including a 50% discount is $" << fnl_total << "$";
        }
        else if (pckg_quantity >= 50 && pckg_quantity <= 99)
        {
            fnl_total = total * DSCT_40;
            std::cout << "Your final total, considering a 40% discount is $" << fnl_total;
        }
        else if (pckg_quantity >= 20 && pckg_quantity <= 49)
        {
            fnl_total = total * DSCT_30;
            std::cout << "Your final total, considering a 30% discount is $" << fnl_total;
        }
        else if (pckg_quantity >= 10 && pckg_quantity <= 19)
        {
            fnl_total = total * DSCT_20;
            std::cout << "Your final total, considering a 20% discount is $" << fnl_total;
        }
    }
    else std::cout << "Your total is $" << total << std::endl;

    return 0;
}
