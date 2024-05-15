//Create a program that displays the name of a shape based on the number of sides entered (Quadrilaterals, Triangles, Pentagons, Hexagons)
#include<iostream>
using namespace std; 
int main() {
    int sides; 
    cout << "Enter number of sides:"; 
    cin >> sides; 
    if (sides == 3) { 
        cout << "Triangles" << endl; 
    } else if (sides == 4) { 
        cout << "Quadrilaterals" << endl; 
    } else if (sides == 5) { 
        cout << "Pentagons" << endl; 
    } else if (sides == 6) { 
        cout << "Hexagons" << endl; 
    }
}