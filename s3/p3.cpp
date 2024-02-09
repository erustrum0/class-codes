// Determines the largest of two numbers.

#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    int b;
    cout << "Enter another number: ";
    cin >> b;

    cout << "The larger number is ";

    // if a>b then
    if (a>b) {
        cout << a << "." << endl;
        return 0;
    };
    // this is equivalent to an else statement
    cout << a << "." << endl;
    return 0;
}