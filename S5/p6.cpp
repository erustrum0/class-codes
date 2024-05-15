// Write a program that prints the number of days in a given month number (1 to 12). Assume it is not a leap year. 
#include<iostream>
using namespace std; 
int main() { 
    cout << "Enter the month #:"; 
    int m; 
    cin >> m; 
    switch(m) { 
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12: cout << "31 days!"; break;
        case 2: cout << "28 days!"; break;
        case 4: 
        case 6: 
        case 9: 
        case 11: cout << "30 days!"; break;
        default : cout << "Invalid input!";
    }
    cout << endl; 
}