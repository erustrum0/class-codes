//Calculates SQRT and square of user inputted number.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double number;
    cout << "Enter a number (double type): ";
    cin >> number;
    double sqrt_number = sqrt(number);
    double sq_number = number * number;
    cout << "Just a guess, but the square root of that number is " << sqrt_number << "?\n";
    cout << "In case the square is wanted instead, that's " << sq_number << ". Have a nice day!\n";
}