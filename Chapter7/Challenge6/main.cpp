/*
6. Rain or Shine
An amateur meteorologist wants to keep track of weather conditions during the
past year’s three-month summer season and has designated each day as either rainy
(‘R’), cloudy (‘C’), or sunny (‘S’). Write a program that stores this information in a
3 × 30 array of characters, where the row indicates the month (0 = June, 1 = July,
2 = August) and the column indicates the day of the month. Note that data are not
being collected for the 31st of any month. The program should begin by reading the
weather data in from a file. Then it should create a report that displays, for each
month and for the whole three-month period, how many days were rainy, how many
were cloudy, and how many were sunny. It should also report which of the three
months had the largest number of rainy days. Data for the program can be found in
the RainOrShine.txt file.
*/
#include <iostream>
#include <fstream>

int main() {
    // Array Section
    const int MONTHS = 3;
    const int DAYS = 30;
    char weather[MONTHS][DAYS];

    std::ifstream RainOrShine;
    RainOrShine.open("RainOrShine.txt"); // Opening file

    // This for loop reads data into the array
    for (int row = 0; row < MONTHS; row++) {
        for (int cols = 0; cols < DAYS; cols++) {
            RainOrShine >> weather[row][cols];
        }
    }

    RainOrShine.close(); // Closing file

    int monthly_rainy_days = 0,
    monthly_sunny_days = 0,
    monthly_cloudy_days = 0,
    sunny_days = 0,
    rainy_days = 0,
    cloudy_days = 0,
    monthly_highest_rainy_days = 0;

    for (int row = 0; row < MONTHS; row++) {
        for (int cols = 0; cols < DAYS; cols++) {
            if (weather[row][cols] == 'R') {
                rainy_days += weather[row][cols];
            } else if (weather[row][cols] == 'C') {
                cloudy_days += weather[row][cols];
            } else if (weather[row][cols] == 'S') {
                sunny_days += weather[row][cols];
            }
        }
        rainy_days /= 82;
        cloudy_days /= 67;
        sunny_days /= 82;

        int temp = rainy_days;
        monthly_highest_rainy_days = temp;

        std::cout << "--------------------------------------------------------" << std::endl;
        std::cout << "Rainy days month " << (row + 1) << " : " << rainy_days << std::endl;
        std::cout << "Cloudy days month " << (row + 1) << " : " << cloudy_days << std::endl;
        std::cout << "Sunny days month " << (row + 1) << " : " << sunny_days << std::endl;
        std::cout << "--------------------------------------------------------" << std::endl;
    }

    //**** This sums up total number of rainy days, cloudy days, and sunny days over three months ****//
    for (int row = 0; row < MONTHS; row++) {
        for (int cols = 0; cols < DAYS; cols++) {
            if (weather[row][cols] == 'R')
                monthly_rainy_days++;
            else if (weather[row][cols] == 'C')
                monthly_cloudy_days++;
            else if (weather[row][cols] == 'S')
                monthly_sunny_days++;
        }
    }

        std::cout << "For the entire three month period " << monthly_rainy_days << " days were rainy." << std::endl;
        std::cout << "For the entire three month period " << monthly_cloudy_days << " days were cloudy." << std::endl;
        std::cout << "For the entire three month period " << monthly_sunny_days << " days were sunny." << std::endl;
        std::cout << "Highest rainy days in month 3 with " << monthly_highest_rainy_days << " rainy days." << std::endl;
    return 0;
    }
