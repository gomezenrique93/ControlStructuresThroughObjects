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
*/
#include <iostream>

int main() {
    int floors,
    rooms;

    std::cout << "How many floors does your hotel have? ";
    std::cin >> floors;
    for (int i = 0; i <= floors; i++) {
        if (i == 0)
        {
            std::cout << i << " : Ground Level " << std::endl;
            continue;
        }
        else if (i == 13)
            continue;

        std::cout << i << " : " << "How many rooms are in this floor? ";
        std::cin >> rooms;

        for (int j = 1; j <= rooms; j++) {

        }
    }
    return 0;
}
