// Create a program that takes two numbers and swaps their values 
#include<iostream>
using namespace std; 

int main() { 
    cout << "Enter a value for x "; 
    int x; 
    cin >> x; 
    cout << "Enter a value for y: "; 
    int y; 
    cin >> y; 
    // Approach 1
    // int temp = x; 
    // x = y; 
    // y = temp; 
    // Approach 2
    x = x + y; 
    y = x - y; 
    x = x - y; 
    cout << "The new value of x is: " << x << " and the new value of y is: " << y << endl; 
}