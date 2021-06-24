/*
11. Population
Write a program that will predict the size of a population of organisms. The program
should ask the user for the starting number of organisms, their average daily population
increase (as a percentage), and the number of days they will multiply. A loop
should display the size of the population for each day.
Input Validation: Do not accept a number less than 2 for the starting size of the population.
Do not accept a negative number for average daily population increase. Do not
accept a number less than 1 for the number of days they will multiply.
*/
#include <iostream>

int main() {
  // Variable Section
  int days;
  double organisms,
  average_increase;

  std::cout << "What is the starting size for the population of user organisms? ";
  std::cin >> organisms;
  while (organisms < 2)
  {
     std::cout << "Please enter a value greater than 2! ";
     std::cout << "Try again: ";
     std::cin >> organisms;
  }

  std::cout << "Enter the average daily population increase as a percentage %: ";
  std::cin >> average_increase;
  while (average_increase < 0)
  {
      std::cout << "Please enter a value greater than zero! ";
      std::cout << "Enter the average daily population increase as a percentage %: ";
      std::cin >> average_increase;
  }
  average_increase /= 100;

  std::cout << "For how many days would you like to predict population increase? ";
  std::cin >> days;
  while (days < 1)
  {
     std::cout << "Please enter a value greater than one! ";
     std::cout << "For how many days would you like to predict population increase? ";
     std::cin >> days;
  }

  std::cout << "Days \t Organisms" << std::endl;
  for (int i = 0; i < days; i++) {
      std::cout << i + 1 << "\t\t\t" << organisms << " " << std::endl;
      organisms += (organisms * average_increase);
  }
    return 0;
}
