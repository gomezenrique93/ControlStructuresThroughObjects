/*
 * 23. Stock Transaction Program
Last month Joe purchased some stock in Acme Software, Inc. Here are the details of
the purchase:
• The number of shares that Joe purchased was 1,000.
• When Joe purchased the stock, he paid $45.50 per share.
• Joe paid his stockbroker a commission that amounted to 2% of the amount he paid
for the stock.
 Two weeks later Joe sold the stock. Here are the details of the sale:
• The number of shares that Joe sold was 1,000.
• He sold the stock for $56.90 per share.
• He paid his stockbroker another commission that amounted to 2% of the amount
  he received for the stock.
Write a program that displays the following information:
• The amount of money Joe paid for the stock.
• The amount of commission Joe paid his broker when he bought the stock.
• The amount that Joe sold the stock for.
• The amount of commission Joe paid his broker when he sold the stock.
• Display the amount of profit that Joe made after selling his stock and paying the two
commissions to his broker. (If the amount of profit that your program displays is a
negative number, then Joe lost money on the transaction.)
 */
#include <iostream>
#include <iomanip>

int main() {
    // Variable Section
    int shares = 1000;
    double sales_per_share1 = 45.50,
    sales_per_share2 = 56.90,
    total_paid,
    total_sold,
    commission_paid1,
    commission_paid2,
    profit;
    const double COMMISSION = 0.02;

    // Calculation Section
    total_paid = shares * sales_per_share1;
    total_sold = shares * sales_per_share2;
    commission_paid1 = total_paid * COMMISSION;
    commission_paid2 = total_sold * COMMISSION;
    profit = total_sold - total_paid - commission_paid1 - commission_paid2;

    // Output Section
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Joe paid $" << total_paid << " for the stock. " << std::endl;
    std::cout << "Joe paid his stock broker $" << commission_paid1 << " when he bought the stock. " << std::endl;
    std::cout << "Joe sold the stock for $" << total_sold << "." << std::endl;
    std::cout << "Joe paid his stock broker $" << commission_paid2 << " when he sold the stock. " << std::endl;
    std::cout << "Joe made a profit of $" << profit << ".";

    return 0;
}
