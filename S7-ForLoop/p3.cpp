// Write a program that calculates the factorial of a number using a for loop.
#include<iostream> 
using namespace std; 
int main() { 
    cout << "Enter a number to calculate factorial for:";
    int num; 
    cin >> num; 
    int fact = 1;
    for(int i = 2; i <= num; i++) { 
        fact = fact * i; 
    }
    cout << fact << endl; 
    // alternative solutino 
    int fact2 = num; 
    for (int i = num - 1; i > 0; i--) { 
        fact2 *= i; // fact2 = fact2 * i; 
    }
    cout << fact2 << endl; 
}
