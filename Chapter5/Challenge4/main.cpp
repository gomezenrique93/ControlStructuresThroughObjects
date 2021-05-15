/*
 * Running on a particular treadmill you burn 3.6 calories per minute. Write a program that
uses a loop to display the number of calories burned after 5, 10, 15, 20, 25, and 30 minutes.
 * */

#include <iostream>
using namespace std;

// 3.6 * 5 = 18
// 3.6 * 10 = 36;
// 3.6 * 15 = 54
// 3.6 * 20 = 72
// 3.6 * 25 = 90
// 3.6 * 30 = 108

int main() {

	const double CALORIES_PER_MIN = 3.6;
	double totalCal = 0;

	cout << " Minutes | Calories Burned \n";

	for (int i = 1; i <= 30; i++)
	{
		totalCal += CALORIES_PER_MIN;
		if ((i % 5) == 0)
		{
			cout << i << "\t\t\t" << totalCal << endl;
		}
	}
	return 0;
}
