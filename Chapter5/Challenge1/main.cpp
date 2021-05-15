/*

Program name: challenge1.cpp
Programmer: Enrique Gomez
Date: 12-18-2020
Version: 1.0
Description of program:
Write a program that asks the user for a positive integer value. The program should use
a loop to get the sum of all the integers from 1 up to the number entered. For example,
if the user enters 50, the loop will find the sum of 1, 2, 3, 4, … 50.

*/

#include <iostream>
using namespace std;

int main() {
	int maxNum, sum = 0;
	do {
		cout << "I will add all the numbers from 1 to your max number \n";
		cout << "What is your max number ?? ";
		cin >> maxNum;
		if (maxNum <= 0) cout << "Please enter a number greater than zero!! \n";
	} while (maxNum <= 0);

	for (int i = 0; i <= maxNum; i++) {
		sum += i;
	}
	cout << sum;
	return 0;
}
