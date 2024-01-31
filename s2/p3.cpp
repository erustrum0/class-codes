#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double number;
    cout << "Enter a number (double type): ";
    cin >> number;
    double sqrt_number = sqrt(number);
    cout << "Just a guess, but the square root of that number is " << sqrt_number << "?\n";
}