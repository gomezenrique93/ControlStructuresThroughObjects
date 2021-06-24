/*
13. Days Out
Write a program that calculates the average number of days a company’s employees
are absent. The program should have the following functions:
• A function called by main that asks the user for the number of employees in
the company. This value should be returned as an int . (The function accepts no
arguments.)
• A function called by main that accepts one argument: the number of employees in
the company. The function should ask the user to enter the number of days each
employee missed during the past year. The total of these days should be returned as
an int .
• A function called by main that takes two arguments: the number of employees in
the company and the total number of days absent for all employees during the year.
The function should return, as a double , the average number of days absent. (This
function does not perform screen output and does not ask the user for input.)
Input Validation: Do not accept a number less than 1 for the number of employees. Do
not accept a negative number for the days any employee missed.
*/
#include <iostream>
int numEmployees(); // Function to collect total number of employees
int numDays(int ); // Function to collect total number of days missed by employees
double calcAverage(int, int); // Function to calculate the average days employees have missed

int main() { // Begin main
    // Variable Section
    int e, d;

    // Assigning e the value of numEmployees
    e = numEmployees();

    // Function call for numDays
    d = numDays(e);

    // Function call for calcAverage
    std::cout << "Average number of days missed by each employee is "
              << calcAverage(e, d) << " days. ";
    return 0;
} // End main

int numEmployees() { // Begin numEmployees
   // Variable to hold number of employees in the company
   int num_employees;

   // User Input Section
   std::cout << "How many employees are in your company? ";
   std::cin >> num_employees;

   // Input Validation Section
   while (num_employees < 1) {
    std::cout << "Please enter a value greater than or equal to one! \n";
    std::cout << "How many employees are in your company? ";
    std::cin >> num_employees;
   }
   return num_employees;
} // End numEmployees

int numDays(int n) { // Begin numDays
   int num_days = 0, total = 0;

    for (int count = 1; count <= n; count++)
    { // for loop used to collect the total amount of days each employee has missed
       std::cout << "Enter the number of days employee " << count << " missed: ";
       std::cin >> num_days;

       // Input Validation
       while (num_days < 0) {
       std::cout << "Please enter a value greater than zero! \n";
       std::cin >> num_days;
       }
       total += num_days;
    }
    return total;
} // End numDays

double calcAverage(int e, int d) { // Begin calcAverage
    return (double)d / e;
} // End calcAverage