// Get polarity of program
// Code recycled from another assignment

//Boolean Formula: num%2 != 0

//embed libraries
#include <iostream>
using namespace std;

int main() {
    //get number, store as int
    int num;
    cout << "Number: ";
    cin >> num;

    //get parity, store as bool
    bool parity = num%2;

    //send output, terminate program
    if (parity) {
        cout << "Parity is odd.\n";
    }
    else {
        cout << "Parity is even.\n";
    }
    return 0;
}