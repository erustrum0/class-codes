//Calculates the volume of a sphere given a radius given by the user.
#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    //V = (4*M_PI*(r*r*r))/3 - Formula for volume
    double r;
    cout << "Enter a radius (inches): ";
    cin >> r;
    double V = (4*M_PI*(r*r*r))/3;
    cout << "The volume of the described sphere is " << V << " cubic inches.\n";
}