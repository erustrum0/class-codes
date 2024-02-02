//Convert Fahrenheit to Celsius
#include <iostream>
using namespace std;

int main() {
    //(F-32)*5/9 - Formula to convert F to C
    double F;
    cout << "Enter a temperature in degrees Fahrenheit: ";
    cin >> F;
    double C = (F-32)*5/9;
    cout << "That's equivalent to " << C << " degrees Celsius.\n";
}