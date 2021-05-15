/*
 *
 *
 * When an object is falling because of gravity, the following formula can be used to
determine the distance the object falls in a specific time period:
d = 1/(2gt(squared2))
The variables in the formula are as follows: d is the distance in meters, g is 9.8, and t
is the amount of time, in seconds, that the object has been falling.
Write a function named fallingDistance that accepts an object’s falling time (in
seconds) as an argument. The function should return the distance, in meters, that the
object has fallen during that time interval. Write a program that demonstrates the
function by calling it in a loop that passes the values 1 through 10 as arguments and
displays the return value.
 */


#include <iostream>
#include <cmath>
using namespace std;

//Function prototype
double fallingDistance(double );


int main()
{
    /** Variables **/
    // t = time in seconds
    int t;
    cout << "I will show you the distance in meters that an object has fallen! \n";

    for (t = 1; t <= 10; t++)
    {
        // d = distance in meters
        double d;
        d = fallingDistance(t);
        cout << " At " << t << " second(s) the object has fallen " << d << " meters " << endl;
    }
  return 0;
} // End main

// Falling Distance Function body
double fallingDistance(double sec)
{
    double distance, g = 9.8;
    distance = (double )1 / 2 * (g * pow(sec, 2.0));
    return distance;
}


