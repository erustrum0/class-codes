// Create a program that computes the volume of a sphere using its radius. V = 4/3 π r³
#include<iostream>
using namespace std; 

int main() {   
    double radius; 
    cout << "Enter the radius: "; 
    cin >> radius; 
    // We write 4.0 since we would like the first division to be treated as a real number division and not integer number division
    // 4/3 = 1 and 4.0/3 = 1.333
    double volume = 4.0/3 * 3.14 * radius * radius * radius; 
    // double volume = 3.14 * radius * radius * radius * 4 / 3; 
    cout << "Volume is: " << volume << endl; 
}