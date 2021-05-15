#include <iostream>
using namespace std;

int main() {

	const double RISE_PER_YEAR = 1.5;
	double sum = 0;

	for (int i = 1; i <= 25; i++)
	{
		sum += (double )RISE_PER_YEAR;
		cout << "Year: " << i << "\t\t" << sum << endl;
	}

	return 0;
}
