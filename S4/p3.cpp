//Prompt the user to input three angles of a triangle. Classify and print whether 
// the triangle is acute, obtuse, or right-angled.

#include<iostream>
using namespace std; 
int main() { 
    float angle1, angle2, angle3; 
    cout << "Enter 3 angles: "; 
    cin >> angle1 >> angle2 >> angle3; 
    if (angle1 + angle2 + angle3 != 180 or angle1 <=0 or angle2 <= 0 or angle3 <= 0) { 
        cout << "Invalid angles for a triangle!";
    } else if (angle1 == 90 or angle2 == 90 or angle3 == 90) { 
        cout << "It is a right triangle!";
    } else if (angle1 > 90 or angle2 > 90 or angle3 > 90) { 
        cout << "It is an obtus triangle!";
    } else { 
        cout << "It is an acute triangle!";
    }
    cout << endl; 
}