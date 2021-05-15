/*
17. Stock Commission
Kathryn bought 750 shares of stock at a price of $35.00 per share. She must pay her
stockbroker a 2 percent commission for the transaction. Write a program that calculates
and displays the following:
• The amount paid for the stock alone (without the commission)
• The amount of the commission
• The total amount paid (for the stock plus the commission)

 */

#include <iostream>
#include <iomanip>

int main() {
    // Variable Section
    int sharesOfStock = 750; // Total stock bought
    double priceOfStock = 35.00, // Price per stock
    commission = 0.02, // Commission for the transaction
    stockPaid, // Amount paid for stock not including commission
    stockCommission, // Amount of commission made from transaction
    stockTotal; // Total amount paid for stock plus commission

    // Calculation Section
    stockPaid = sharesOfStock * priceOfStock;
    stockCommission = sharesOfStock * priceOfStock * commission;
    stockTotal = stockPaid + stockCommission;

    // Output Section
    std::cout << std::fixed << std::showpoint << std::setprecision(2) << std::endl;
    std::cout << "The amount paid for stock alone without commission is $" << stockPaid << std::endl;
    std::cout << "The amount of commission paid for this stock is $" << stockCommission << std::endl;
    std::cout << "The total amount paid for stock is $" << stockTotal << std::endl;
    return 0;
}
