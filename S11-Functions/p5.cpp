#include<iostream>
using namespace std; 

double calcArea(double len, double width) { 
    return len * width; 
}

int main() { 
    double l, w; 
    cin >> l >> w; 
    cout << calcArea(l,w) << endl; 
    cout << calcArea(10, 10.5) << endl; 
}