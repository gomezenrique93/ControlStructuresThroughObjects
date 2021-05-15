/*8. Total Purchase
A customer in a store is purchasing five items. The prices of the five items are
Price of item 1 = $15.95
Price of item 2 = $24.95
Price of item 3 = $6.95
Price of item 4 = $12.95
Price of item 5 = $3.95

Write a program that holds the prices of the five items in five variables. Display each
item’s price, the subtotal of the sale, the amount of sales tax, and the total. Assume the
sales tax is 7%.
 */
#include <iostream>
#include <iomanip>

int main() {
    // Variable Section
    double item1 = 15.95,
    item2 = 24.95,
    item3 = 6.95,
    item4 = 12.95,
    item5 = 3.95,
    salesTax = 0.07,
    subTotal,
    totalTax,
    total;

    // Calculation Section
   subTotal = item1 + item2 + item3 + item4 + item5;
   totalTax = subTotal * salesTax;
   total = totalTax + subTotal;

   // Output section
   std::cout << "The price for the first item is $ " << item1 << std::endl;
   std::cout << "The price for the first item is $ " << item2 << std::endl;
   std::cout << "The price for the first item is $ " << item3 << std::endl;
   std::cout << "The price for the first item is $ " << item4 << std::endl;
   std::cout << "The price for the first item is $ " << item5 << std::endl;
   std::cout << "The subtotal of the sale is $ " << subTotal << std::endl;
   std::cout << "The sales tax is " << salesTax * 100 << "%" << std::endl;
   std::cout << std::fixed << std::showpoint << std::setprecision(2);
   std::cout << "The total is $ " << total << std::endl;

    return 0;
}
