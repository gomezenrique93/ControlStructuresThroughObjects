/*
 *
Membership Fees Increase
A country club, which currently charges $2,500 per year for membership, has
announced it will increase its membership fee by 4% each year for the next six years.
Write a program that uses a loop to display the projected rates for the next six years.

 */

#include <iostream>
#include <iomanip>

int main() {
	// Variable Section
	float projected_increase, yearly_increase = 0.04, yearly_membership = 2500.00;
	for (int i = 1; i <= 6; i++)

	{
		yearly_membership += yearly_membership * yearly_increase;
		projected_increase = yearly_membership;
		std::cout << "Year --- Projected Cost \n";
		std::cout << i << "\t\t" << std::setprecision(2) << std::fixed << projected_increase << std::endl;
	}
	return 0;
}
