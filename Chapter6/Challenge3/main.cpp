/*
 *
Write a program that determines which of a company’s four divisions (Northeast,
Southeast, Northwest, and Southwest) had the greatest sales for a quarter. It should
include the following two functions, which are called by main .
• double getSales() is passed the name of a division. It asks the user for a division’s
quarterly sales figure, validates the input, then returns it. It should be called once for
each division.
• void findHighest() is passed the four sales totals. It determines which is the largest
and prints the name of the high grossing division, along with its sales figure.
Input Validation: Do not accept dollar amounts less than $0.00.

 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function prototype section
double getSales(string);
void findHighest(double, double, double, double );


int main() {

    // Variable section
    double nEast,
            sEast,
            nWest,
            sWest;

    nEast = getSales("Northeast");
    sEast = getSales("Southeast");
    nWest = getSales("Northwest");
    sWest = getSales("Southwest");

    findHighest(nEast, sEast, nWest, sWest);

	return 0;
} // end main

double getSales(string division)
{
    double sales;
    do
    {
        cout << "What is the " << division;
        cout << " division's quarterly sales figure? ";
        cin  >> sales;

        if (sales < 0.00)
            cout << "Error! Invaid sales figure.\n"
                 << "Dollar amount must be greater than $0.00\n";

    } while (sales <= 0.00);
    return sales;
}

void findHighest(double NE, double SE, double NW, double SW)
{
    if (NE > SE && NE > NW && NE > SW)
    {
        cout << " The northeast division is the highest grossing division \n";
        cout << "Total sales figures $ " << NE;
    }
    else if (SE > NE && SE > NW && SE > SW)
    {
        cout << " The southeast division is the highest grossing division \n";
        cout << "Total sales figures $ " << setprecision(2) << fixed << SE;
    }
    else if (NW > NE && NW > SW && NW > SE)
    {
        cout << " The northwest division is the highest grossing division \n";
        cout << "Total sales figures $ " << setprecision(2) << fixed << NW;
    }
    else if (SW > NE && SW > NW && SW > SE)
    {
        cout << " The southwest division is the highest grossing division \n";
        cout << "Total sales figures $ " << setprecision(2) << fixed << SW;
    }
}
