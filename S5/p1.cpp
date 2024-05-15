// Write a program that reads number of sides of a shape from the input (3 or 4)
// and based on number of sides assigns string value of "Triangle" or "Quadrilateral"
// to a string variable and then prints out the string variable. 
#include<iostream> 
using namespace std; 
int main() { 
    int sides; 
    cout << "Enter number of sides: "; 
    cin >> sides; 
    string shape  = "expected number of sides is 3 or 4";
    string shape2 = "expected number of sides is 3 or 4";
    // using if/else
    if (sides == 3) { 
        shape = "triangle";
    } else if (sides == 4) { 
        shape = "quadrilateral";
    }
    cout << shape << endl; 
}

