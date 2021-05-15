/*
 *
5. Average of Values
To get the average of a series of values, you add the values up and then divide the sum
by the number of values. Write a program that stores the following values in five different
variables: 28, 32, 37, 24, and 33. The program should first calculate the sum
of these five variables and store the result in a separate variable named sum . Then, the
program should divide the sum variable by 5 to get the average. Display the average
on the screen.

 */
#include <iostream>

int main() {
    // Variable Section
    int value_one = 28,
    value_two = 32,
    value_three = 37,
    value_four = 24,
    value_five = 33,
    sum;
    double average;

   sum = value_one + value_two + value_three + value_four + value_five;
   average = sum / 5.0;

   std::cout << "The average of the five numbers is " << average;
   return 0;
}
