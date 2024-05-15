/*
Ask the user to input their age. Determine and print the ticket price based on the age:
- Children (age 0-12): $5
- Teens (age 13-18): $8
- Adults (age 19-64): $12
- Seniors (age 65 and above): $6
*/

#include<iostream>
using namespace std; 
int main() { 
    int age;
    cout << "Enter the age: "; 
    cin >> age; 
    if (age < 0) {
        cout << "Invalid age!";
    } else if (age <= 12) {
        cout << "Price is $5";
    } else if (age <= 18) {
        cout << "Price is $8";
    } else if (age <= 64) { 
        cout << "Price is $12";
    } else {
        cout << "Price is $6";
    }
    cout << endl; 
}