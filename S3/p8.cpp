#include<iostream>
using namespace std; 
int main() { 
    int x; 
    cout << "Enter a number:"; 
    cin >> x; 
    if (x > 0) { 
        cout << "number is positive!" << endl; 
    } else if (x < 0) { 
        cout << "number is negative!" << endl; 
    } else { 
        cout << "number is zero!" << endl; 
    }

    
    // chaining > and < operators won't work since these operators are evaluated from left to right
    // cout << (1 > 2 > 3) << endl;
    // cout << (12 > 3 > 5) << endl;
    // cout << (15 < 33 > 0) << endl;
    // cout << (3 > 2 > 1) << endl; 
}