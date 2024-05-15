// Create a program that takes two integers as input and prints their sum.
#include<iostream>
using namespace std; 

int main() { 
    int num1; 
    int num2; 
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    int sum = num1 + num2;
    cout << "Sum of the two entered numbers is: ";
    cout << sum << endl; 
}