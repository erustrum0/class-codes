/*
Prompt the user to input the coordinates (x, y) of a point. Determine and print the quadrant in which the point lies:
- I: Top-right
- II: Top-left
- III: Bottom-left
- IV: Bottom-right
*/

#include<iostream>
using namespace std; 
int main() { 
    int x, y;
    cout << "Enter the coordinates: "; 
    cin >> x >> y; 
    if (x >= 0 and y >= 0) {
        cout << "quadrant I";
    } else if (x <= 0 and y >= 0) {
        cout << "quadrant II";
    } else if (x <= 0 and y <= 0) {
        cout << "quadrant III";
    } else if (x >= 0 and y <= 0) { 
        cout << "quadrand IV";
    }
    cout << endl; 
}