/*
16. Senior Citizen Property Tax
Madison County provides a $5,000 homeowner exemption for its senior citizens. For
example, if a senior’s house is valued at $158,000 its assessed value would be $94,800,
as explained above. However, he would only pay tax on $89,800. At last year’s tax
rate of $2.64 for each $100 of assessed value, the property tax would be $2,370.72. In
addition to the tax break, senior citizens are allowed to pay their property tax in four
equal payments. The quarterly payment due on this property would be $592.68. Write
a program that asks the user to input the actual value of a piece of property and the
current tax rate for each $100 of assessed value. The program should then calculate
and report how much annual property tax a senior homeowner will be charged for this
property and what the quarterly tax bill will be.
 */
#include <iostream>
#include <iomanip>

int main() {
    // Variable Section
    const int homeowner_exemption = 5000;
    int house_value;
    double assessed_percentage = 0.60,
    tax_rate = 2.64,
    property_tax,
    quarterly_payments;

    // User Input Section
    std::cout << "What is the value of your home? ";
    std::cin >> house_value;

    // Calculation for property tax
   property_tax = (house_value * assessed_percentage - homeowner_exemption) / 100 * tax_rate;

   // Calculation for quarterly payments
   quarterly_payments = property_tax / 4;

   // Format Section
   std::cout << std::fixed << std::showpoint << std::setprecision(2);

   // Output Section
   std::cout << "Your total property tax charges $" << property_tax << std::endl;
   std::cout << "Your total quarterly payments $" << quarterly_payments << std::endl;
    return 0;
}
