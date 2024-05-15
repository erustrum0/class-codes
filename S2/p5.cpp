// Write a program that calculates the area of a rectangle given its length and width.
#include<iostream>
using namespace std; 

int main() { 
    double width; 
    double length; 
    cout << "Enter the width: "; 
    cin >> width;
    cout << "Enter the length: "; 
    cin >> length;
    double area = width * length; 
    cout << "The area is: " << area << endl; 
}