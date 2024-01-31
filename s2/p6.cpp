#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    //V = 4/3*pi*r*r*r - Formula for volume
    double r;
    cout << "Enter a radius (inches): ";
    cin >> r;
    double V = 4/3*M_PI*r*r*r;
    cout << "The volume of the described sphere is " << V << " cubic inches.\n";
}