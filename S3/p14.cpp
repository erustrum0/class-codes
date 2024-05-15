//Write a program to check if a year is leap year or not. 
#include<iostream>
using namespace std; 
int main() { 
    cout << "Enter a year and I will tell you if it is a leap year:";
    int year; 
    cin >> year; 
    
    /*
    if (year % 4 == 0) { 
        if (year % 400 == 0) {
            cout << "It is a leap year!";
        } else if (year % 100 == 0) { 
            cout << "it is not a leap year!";
        } else { 
            cout << "It is a leap year!"; 
        }
    } else { 
        cout << "it is not a leap year!";
    }
    */

   /*
    if (year % 400 == 0) { 
        cout << "It is a leap year!";
    } else if (year % 100 == 0) { 
        cout << "It is not a leap year!";
    } else if (year % 4 == 0) { 
        cout << "It is a leap year!";
    } else { 
        cout << "It is not a leap year!";
    }
    */

   /*
   if (year % 100 == 0) { 
        cout << "It is not a leap year!";
   } else if (year % 4 == 0) { 
        cout << "It is a leap year!";
   } else { 
        cout << "It is not a leap year!";
   }
   */

    if ((year % 100 == 0 && year % 400 != 0) || year % 4 != 0) { 
        cout << "It is not a leap year!";    
    } else { 
        cout << "It is a leap year!";
    }
    cout << endl; 
}