/*
 *
 *
18. Energy Drink Consumption
A soft drink company recently surveyed 16,500 of its customers and found that
approximately 15 percent of those surveyed purchase one or more energy drinks per
week. Of those customers who purchase energy drinks, approximately 58 percent of
them prefer citrus-flavored energy drinks. Write a program that displays the following:
• The approximate number of customers in the survey who purchase one or more
energy drinks per week
• The approximate number of customers in the survey who prefer citrus-flavored energy
drinks

 */
#include <iostream>

int main() {
    // Variable Section
   int customers = 16500; // Variable that represents the number of customers in the survey
   double energyPercentage = 0.15, // Variable that represents the percentage of customers that drink energy drinks
   citrusPercentage = 0.58, // Variable that represents the percentage of customers that drink citrus flavored energy drinks
   energyTotal, // Total amount of customers that drink energy drinks
   citrusTotal; // Total amount of customers that drink citrus flavored energy drinks

   // Calculation Section
   energyTotal = customers * energyPercentage;
   citrusTotal = energyTotal * citrusPercentage;

   // Output Section
   std::cout << "The amount of customers that purchase energy drinks is " << energyTotal << std::endl;
   std::cout << "The amount of customers that purchase citrus flavored energy drinks is " << citrusTotal << std::endl;
    return 0;
}
