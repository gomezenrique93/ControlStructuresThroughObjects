/*
6. Distance Traveled
The distance a vehicle travels can be calculated as follows:
distance = speed * time
For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is
120 miles.
Write a program that asks the user for the speed of a vehicle (in miles per hour) and how
many hours it has traveled. The program should then use a loop to display the distance the
vehicle has traveled for each hour of that time period. Here is an example of the output:
What is the speed of the vehicle in mph? 40
How many hours has it traveled? 3
Hour Distance Traveled
--------------------------------
1 40
2 80
3 120
Input Validation: Do not accept a negative number for speed and do not accept any
value less than 1 for time traveled.
*/
#include <iostream>

int main() {
    // Variable Section
    int speed,
    hours,
    distance;

    // User Input Section
    std::cout << "Enter the speed of the vehicle (in miles per hour): ";
    std::cin >> speed;

    while (speed < 0) {
        std::cout << "Please make sure that you enter a positive value!! " << std::endl;
        std::cout << "Enter the speed of the vehicle (in miles per hour): ";
        std::cin >> speed;
    }

    std::cout << "Enter the amount of hours that this vehicle was traveling: ";
    std::cin >> hours;

    while (hours < 1) {
     std::cout << "Please make sure that you enter a value greater than 1!! " << std::endl;
     std::cout << "Enter the amount of hours that this vehicle was traveling: ";
     std::cin >> hours;
    }

    // Display Table Heading
    std::cout << "Hours\tDistance\n";
    std::cout << "__________________\n";

    // Display Distance
    for (int time = 1; time <= hours; time++) {
        distance = speed * time;
       std::cout << time << "\t\t" << distance << "\n";
    }
    return 0;
}
