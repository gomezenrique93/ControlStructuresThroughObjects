/*
15. Property Tax
A county collects property taxes on the assessment value of property, which is 60 percent
of the property’s actual value. If an acre of land is valued at $10,000, its assessment
value is $6,000. The property tax is then 75¢ for each $100 of the assessment value.
The tax for the acre assessed at $6,000 will be $45. Write a program that asks for the
actual value of a piece of property and displays the assessment value and property tax.
 */

#include <iostream>
#include <iomanip>

int main() {
    // Variable Section
    double property_value,
    property_percentage = 0.75,
    property_tax,
    assessment_value,
    assessment_percentage = 0.60;

    // User Input Section
    std::cout << "Enter your property value: $ ";
    std::cin >> property_value;

    // Calculation Section
    assessment_value = assessment_percentage * property_value;
    property_tax = (assessment_value / 100) * property_percentage;

    // Output Section
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "The assessment value for your property is $: " << assessment_value << std::endl;
    std::cout << "The property tax for your property is $: " << property_tax << std::endl;

    return 0;
}
