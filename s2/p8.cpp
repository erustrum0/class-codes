//Takes two user inputted numbers, stores them in variables and swaps them.
#include <iostream>
using namespace std;

int main() {
    int numberA;
    cout << "Enter a number: ";
    cin >> numberA;
    int numberB;
    cout << "Enter another number: ";
    cin >> numberB;
    cout << "Before swap:\n";
    cout << "NumberA: " << numberA << "\n";
    cout << "NumberB: " << numberB << "\n";
    int tempNumber = numberA;
    numberA = numberB;
    numberB = tempNumber;
    cout << "After swap:\n";
    cout << "NumberA: " << numberA << "\n";
    cout << "NumberB: " << numberB << "\n";
}