// Write a program that prints the number of days in a given month number (1 to 12). Assume it is not a leap year. 
#include<iostream>
using namespace std; 
int main() { 
    cout << "Enter the month #:"; 
    int m; 
    cin >> m; 
    if (m == 2) { 
        cout << "There are 28 days in this month!"; 
    } else if (m == 4 or m== 6 or m == 9 or m == 11) { 
        cout << "There are 30 days in this month!"; 
    } else if ( m > 12 || m < 1) { 
        cout << "Enter a valid month #!";
    } else {            //if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        cout << "There are 31 days in this month!"; 
    }
    cout << endl; 
}