/*
The following info should be at the top of all your programs
(Version Control) if you don’t you will be docked

Program name: challenge2.cpp
Programmer: Enrique Gomez
Date: 12-18-2020
Version: 1.0
Description of program:
The East Coast sales division of a company generates 58 percent of total sales. Based
on that percentage, write a program that will predict how much the East Coast division
will generate if the company has $8.6 million in sales this year.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// variable section
	// s = sales, p = percentage
	// totalSales = total sales for East Coast Division
	int long s = 8600000;
	double p = 0.58;
	double totalSales;

	// Calculation section will multiply sales figure times the percentage in
	// order to find total amount of sales
	totalSales = (double)s * p;
	cout << "The total sales for this year is $ " << s << endl;
	cout << "The total percentage of sales for the East Coast Division is " << p * 100 << " %" << endl;
	cout << "Total sales for the East Coast Division is $: " << fixed << setprecision(2) << totalSales;
	return 0;
}
