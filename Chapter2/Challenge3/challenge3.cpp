/*

Program name: challenge3.cpp
Programmer: Enrique Gomez
Date: 12-18-2020
Version: 1.0
Description of program: This is a description of my program
Write a program that will compute the total sales tax on a $95 purchase. Assume the
state sales tax is 4 percent and the county sales tax is 2 percent.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// variable section
	// p equals purchase amount
	// s equals sales tax
	// c equals county tax
	// totalPrice equals total amount considering p, s, and c
	int p = 95;
	double s = 0.04, c = 0.02, totalSalesTax, totalCountyTax ,totalPrice;

	// calculation section
	totalSalesTax = p * s;
	totalCountyTax = p * c;

	totalPrice = p + totalSalesTax + totalCountyTax;

	cout << "The net sales price is $" << p << endl;
	cout << "The sales tax is " << s * 100 << "%" << endl;
	cout << "The county tax is " << c * 100 << "%" << endl;
	cout << "The total price after taxes is $" << fixed << setprecision(2) << totalPrice;
	return 0;
}
