/*
 *
 * Write a program that asks the user to enter a number within the range of 1 through
 * 10. Use a switch statement to display the Roman numeral version of that number.
 * Input Validation: Do not accept a number less than 1 or greater than 10.
 * */

#include <iostream>
using namespace std;

int main() {
	// Variable section to store number entered by the user
	int x = 0;
	do {
		cout << "Enter a number between 1 and 10 and I will convert it to a Roman Numeral \n";
		cin >> x;
		if (x < 0 || x > 10) {
			cout << "Please enter a number greater than zero and less than 10! Once entered press ENTER \n";
			cin >> x;
			cin.ignore();
		}
	} while(x < 0 || x > 10);

	switch(x)
	{
		case 1: cout << "I";
			break;
		case 2: cout << "II";
			break;
		case 3: cout << "III";
			break;
		case 4: cout << "IV";
			break;
		case 5: cout << "V";
			break;
		case 6: cout << "VI";
			break;
		case 7: cout << "VII";
			break;
		case 8: cout << "VIII";
			break;
		case 9: cout << "IX";
			break;
		case 10: cout << "X";
			break;
	}
	return 0;
}
