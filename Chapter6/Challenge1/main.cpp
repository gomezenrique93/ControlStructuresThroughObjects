/*
 *1. Markup
Write a program that asks the user to enter an item’s wholesale cost and its markup
percentage. It should then display the item’s retail price. For example:
• If an item’s wholesale cost is 5.00 and its markup percentage is 100%, then the
item’s retail price is 10.00.
• If an item’s wholesale cost is 5.00 and its markup percentage is 50%, then the item’s
retail price is 7.50.
The program should have a function named calculateRetail that receives the
wholesale cost and the markup percentage as arguments and returns the retail price
of the item.
Input Validation: Do not accept negative values for either the wholesale cost of the
item or the markup percentage.
 * */

#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail(double, double);

int main() {
	double wSale, mUp, retail;
	do {
		cout << "What is the wholesale cost of your items? $ ";
		cin >> wSale;
		if (wSale <= 0) cout << "Please enter a value greater than zero!! \n";
	} while(wSale <= 0);

	do {
		cout << "What is the mark up for your item? ";
		cin >> mUp;
		if (mUp <= 0) cout << "Please enter a value greater than zero!! \n";
	}while(mUp <= 0);

	retail = calculateRetail(wSale, mUp);
	cout << fixed << setprecision(2) << "Total including mark up is $: " << retail;
	return 0;
}

 double calculateRetail(double wSale, double mUp)
{
	double total, fTotal;
	mUp /= 100.00; // will turn mark up entered by user into a decimal
	total = wSale * mUp; // will multiply mark up and wholesale together
	 fTotal = total + wSale; // will add quotient of mark up and wholesale to total
	return fTotal;
}
