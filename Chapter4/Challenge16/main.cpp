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
   std::string runner1,
   runner2,
   runner3,
   first_place,
   second_place,
   third_place;
   int minutes1,
   seconds1,
   minutes2,
   seconds2,
   minutes3,
   seconds3,
   run_time1,
   run_time2,
   run_time3;

   // Input Section Runner One
   std::cout << "Enter the name for the first runner: ";
   std::cin >> runner1;
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

   run_time1 = minutes1 + seconds1;

   // Input Section Runner Two
    std::cout << "Enter the name for the second runner: ";
    std::cin >> runner2;
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

    run_time2 = minutes2 + seconds2;

    // Input Section Runner Three
    std::cout << "Enter the name for the third runner: ";
    std::cin >> runner3;
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

    run_time3 = minutes3 + seconds3;

    /*
    if ((run_time1 < run_time2) && (run_time1 < run_time3)) {
        first_place += runner1;
    } */


    if ((run_time3 > run_time2) && (run_time3 > run_time1)){
        std::cout << "Third place is " << runner3 << std::endl;
    } else if ((run_time2 > run_time1) && (run_time2 < run_time3)){
        std::cout << "Second place is " << runner2 << std::endl;
   } else if ((run_time1 < run_time2) && (run_time1 < run_time3)) {
        std::cout << "First place is " << runner1 << std::endl;
   }

    return 0;
}
