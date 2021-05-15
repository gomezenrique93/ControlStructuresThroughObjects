
/*
 * 6. Kinetic Energy
In physics, an object that is in motion is said to have kinetic energy. The following
formula can be used to determine a moving object’s kinetic energy:
KE = 1/2 mv(squared)
The variables in the formula are as follows: KE is the kinetic energy, m is the object’s
mass in kilograms, and v is the object’s velocity, in meters per second.
Write a function named kineticEnergy that accepts an object’s mass (in kilograms)
and velocity (in meters per second) as arguments. The function should return the
amount of kinetic energy that the object has. Demonstrate the function by calling it in
a program that asks the user to enter values for mass and velocity.
 * */

#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
double kineticEnergy(double, double);

int main()
{
    double kinEnergy, mass, vel;
    cout << "Enter your objects mass: ";
    cin >> mass;
    cout << "Enter your objects velocity: ";
    cin >> vel;
    kinEnergy = kineticEnergy(mass, vel);
    cout << "Kinetic Energy " <<  kinEnergy;
    return 0;
} // end main

double kineticEnergy(double m, double v)
{
    double ke;
    ke = (double )1 / 2 * (m * pow(v, 2.0));
    return ke;
}