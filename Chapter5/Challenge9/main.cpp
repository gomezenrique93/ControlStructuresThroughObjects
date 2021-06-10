/*
9. Hotel Occupancy
Write a program that calculates the occupancy rate for a hotel. The program should
start by asking the user how many floors the hotel has. A loop should then iterate once
for each floor. In each iteration, the loop should ask the user for the number of rooms
on the floor and how many of them are occupied. After all the iterations, the program
should display how many rooms the hotel has, how many of them are occupied, how
many are unoccupied, and the percentage of rooms that are occupied. The percentage
may be calculated by dividing the number of rooms occupied by the number of rooms.
NOTE: It is traditional that most hotels do not have a thirteenth floor. The loop in
this program should skip the entire thirteenth iteration.
Input Validation: Do not accept a value less than 1 for the number of floors. Do not
accept a number less than 10 for the number of rooms on a floor.
*/
#include <iostream>
#include <iomanip>

int main() {
    // Variable Section
    int floors,
    rooms,
    occupied_rooms,
    total_rooms = 0,
    total_occupied_rooms = 0;
    double percentage_occupied_rooms;

    // User input section for floors
    std::cout << "How many floors does your hotel have? ";
    std::cin >> floors;

    // Input validation section for floors
    while(floors <= 0) {
       std::cout << "Please enter an amount greater than zero!! ";
       std::cin >> floors;
    }

    for (int i = 1; i <= floors; i++)
    {
        // If statement checks for 13th floor
        if (i == 13)
        {
            std::cout << "------------------------------------------\n";
            std::cout << "Lounge Area " << std::endl;
            continue;
        }
        // User input section for rooms
        std::cout << "------------------------------------------\n";
        std::cout << i << " : How many rooms are on this floor? ";
        std::cin >> rooms;

        // Input validation for rooms
        while(rooms < 10)
        {
            std::cout << "Please enter values greater than ten: ";
            std::cin >> rooms;
        }

        // Accumulates the total number of rooms that are on the floor
        total_rooms += rooms;

        // User input section for occupied rooms
        std::cout << "How many rooms are occupied? ";
        std::cin >> occupied_rooms;

        // Accumulates the total number of rooms that are occupied
        total_occupied_rooms += occupied_rooms;
    }

    // Calculation Section for rooms occupied, will be displayed as a percentage
    percentage_occupied_rooms = (double)total_occupied_rooms / total_rooms * 100;

    // Output Section for total rooms and total rooms occupied
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "This hotel has " << total_rooms << " total rooms and "
              << total_occupied_rooms << " occupied rooms. " << std::endl;

    // Formatting Section
    std::cout << std::fixed << std::showpoint << std::setprecision(1);

    // Output Section for percentage of rooms occupied
    std::cout << "The total percentage of rooms occupied is %" << percentage_occupied_rooms << std::endl;
    return 0;
}
