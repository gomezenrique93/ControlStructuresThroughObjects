
/*
 *
 * Write a program that determines which of five geographic regions within a major city
(north, south, east, west, and central) had the fewest reported automobile accidents last
year. It should have the following two functions, which are called by main .
• int getNumAccidents() is passed the name of a region. It asks the user for the
number of automobile accidents reported in that region during the last year, validates
the input, then returns it. It should be called once for each city region.
• void findLowest() is passed the five accident totals. It determines which is the
smallest and prints the name of the region, along with its accident figure.
Input Validation: Do not accept an accident number that is less than 0.

 */


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function prototypes
int getNumAccidents(string);
void findLowest(double, double, double, double, double );

int main() {

    // variable section for each region
    double north, south, east, west, central;

    north = getNumAccidents("North");
    south = getNumAccidents("South");
    east = getNumAccidents("East");
    west = getNumAccidents("West");
    central = getNumAccidents("Central");

    findLowest(north, south, east, west, central);

    return 0;
}

int getNumAccidents(string region)
{
    int accidents;

    do {
      cout << "Enter the number of accidents for the " << region << " region: ";
      cin >> accidents;
        if (accidents <= 0) cout << "Please enter a value greater than zero!! \n";
    } while (accidents <= 0);

    return accidents;
}

void findLowest(double n, double s, double e, double w, double c)
{
    if (n < s && n < e && n < w && n < c)
    {
        cout << "The northern region has had the least accidents! \n";
        cout << "Total number of accidents is: " << n;
    }
    else if (s < n && s < e && s < w && s < c)
    {
        cout << "The southern region has had the least accidents! \n";
        cout << "Total number of accidents is: " << s;
    }
    else if (e < n && e < s && e < w && e < c)
    {
        cout << "The eastern region has had the least accidents! \n";
        cout << "Total number of accidents is: " << e;
    }
    else if (w < n && w < s && w < e && w < c)
    {
        cout << "The western region has had the least accidents! \n";
        cout << "Total number of accidents is: " << w;
    }
    else if (c < n && c < s && c < e && c < w)
    {
        cout << "The central region has had the least accidents! \n";
        cout << "Total number of accidents is: " << c;
    }
}
