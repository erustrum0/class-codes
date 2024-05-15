#include<iostream>
using namespace std; 

double calculateSum(double x, double y) { 
    double z = x + y; 
    return z;
    // return x + y;
}

int main() { 
    for(int i = 0; i < 3; i++) { 
        double a, b; 
        cin >> a >> b; 
        double c = calculateSum(a, b); 
        cout << c << endl; 
    }
    cout << calculateSum(5, 11) << endl; 
    cout << calculateSum(5.2, 11.3) << endl; 
}