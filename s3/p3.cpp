//Determines whether or not a given number is larger than, smaller than or equal to 10.
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    string result = "greater or equal to ";

    if (number < 10) {
        result = "less than ";
    };
    cout << "That number is " << result << "ten!\n";
}