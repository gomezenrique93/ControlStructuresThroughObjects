/*
 * Minimum/Maximum
 * Write a program that asks the user to enter two numbers. The program should use the
 * conditional operator to determine which number is the smaller and which is the larger.
 */


#include <iostream>
using namespace std;

int main() {
	// Variable section
	int x, y;
	cout << "Hello, please enter two numbers and I will see which one is greater!! \n" << endl;
	cin >> x >> y;

	if (x > y)
	{
		cout << x << " is greater than " << y << endl;
	}
	else
		{
		cout << y << " is greater than " << x << endl;
	}
	return 0;
}
