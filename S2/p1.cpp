// Write a program that reads an integer from the user and prints it.
#include<iostream> 
using namespace std; 

int main() { 
    int number;
    // When we have a literal string, we enclose it in " " 
    cout << "Please enter an integer number: ";
    cin >> number;
    cout << "The number entered by you is: " << number << endl; 
}