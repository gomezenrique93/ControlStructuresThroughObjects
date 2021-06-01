/*
16. Running the Race
Write a program that asks for the names of three runners and the time it took each
of them to finish a race. The program should display who came in first, second, and
third place.
Input Validation: Only accept positive numbers for the times.
*/
#include <iostream>
#include <string>

int main() {
   // Variable Section
   std::string name1,
   name2,
   name3,
   winner;
   int minutes1,
   seconds1,
   minutes2,
   seconds2,
   minutes3,
   seconds3;

   // Input Section Runner One
   std::cout << "Enter the name for the first runner: ";
   std::cin >> name1;
   std::cout << "Enter his run time in minutes, then seconds: \n";
   std::cout << "Minutes: ";
   std::cin >> minutes1;
   std::cout << "Seconds: ";
   std::cin >> seconds1;

   // Input Validation Section Runner One
   while (minutes1 < 0 || seconds1 < 0)
   {
     std::cout << "Please make sure that the values for minutes and seconds are greater than zero! \n";
     std::cout << "Enter his run time in minutes, then seconds: ";
     std::cout << "Minutes: ";
     std::cin >> minutes1;
     std::cout << "Seconds: ";
     std::cin >> seconds1;
   }

   // Input Section Runner Two
    std::cout << "Enter the name for the second runner: ";
    std::cin >> name2;
    std::cout << "Enter his/her run time in minutes, then seconds: \n";
    std::cout << "Minutes: ";
    std::cin >> minutes2;
    std::cout << "Seconds: ";
    std::cin >> seconds2;

    // Input Validation Section Runner Two
    while (minutes2 < 0 || seconds2 < 0)
    {
        std::cout << "Please make sure that the values for minutes and seconds are greater than zero! \n";
        std::cout << "Enter his/her run time in minutes, then seconds: ";
        std::cout << "Minutes: ";
        std::cin >> minutes2;
        std::cout << "Seconds: ";
        std::cin >> seconds2;
    }

    // Input Section Runner Three
    std::cout << "Enter the name for the third runner: ";
    std::cin >> name3;
    std::cout << "Enter his/her run time in minutes, then seconds: \n";
    std::cout << "Minutes: ";
    std::cin >> minutes3;
    std::cout << "Seconds: ";
    std::cin >> seconds3;

    // Input Validation Section Runner Three
    while (minutes3 < 0 || seconds3 < 0)
    {
        std::cout << "Please make sure that the values for minutes and seconds are greater than zero! \n";
        std::cout << "Enter his run time in minutes, then seconds: ";
        std::cout << "Minutes: ";
        std::cin >> minutes3;
        std::cout << "Seconds: ";
        std::cin >> seconds3;
    }

    if ((minutes1 && seconds1) < (minutes2 && seconds2) < (minutes3 && seconds3)) {
        winner = name1;
    } else if (minutes2 && seconds2 < minutes1 && seconds1 < minutes3 && seconds3) {
        winner = name2;
    } else if (minutes3 && seconds3 < minutes1 && seconds1 < minutes2 && seconds2) {
        winner = name3;
    }

    std::cout << "The runner with the fastest time is " << winner;
    return 0;
}
