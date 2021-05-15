/*
8. How Many Widgets?
The Yukon Widget Company manufactures widgets that weigh 12.5 pounds each.
Write a program that calculates how many widgets are stacked on a pallet, based on
the total weight of the pallet. The program should ask the user how much the pallet
weighs by itself and with the widgets stacked on it. It should then calculate and display
the number of widgets stacked on the pallet.
 */
#include <iostream>

int main() {
    // Variable Section
    double widget_weight = 12.5, //Holds the weight of the widgets
    total_weight, //Holds the total weight of the pallet and widgets
    widget_total; //Holds the total amount of widgets on the pallets
    int pallet_weight; // Holds the weight of the pallet

   // User Input Section
   std::cout << "How much does the pallet weigh? ";
   std::cin >> pallet_weight;
   std::cout << "How much does the pallet weigh with the widgets? ";
   std::cin >> total_weight;

   // Calculation Section
    widget_total = (double)pallet_weight / widget_weight;

    // Output Section
    std::cout << "The total amount of widgets held on the pallet: " << widget_total << std::endl;

    return 0;
}
