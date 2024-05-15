//Create a program that displays the name of a shape based on the number of sides entered (Quadrilaterals, Triangles, Pentagons, Hexagons)
#include<iostream>
using namespace std; 
int main() { 
    cout << "Enter number of sides of the shape:"; 
    int sides; 
    cin >> sides; 
    string s = "";
    switch (sides) { 
        case 3: s = "Triangles";break; 
        case 4: s = "Quadrilaterals";break;
        case 5: s = "Pentagons";break; 
        case 6: s = "Hexagons";break;
        default: s = "Wrong input. Expected a number between 3 and 6"; 
    }
    cout << s << endl; 
}