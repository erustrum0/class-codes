#include<iostream>
using namespace std; 

double celsiusToFahrenheit(double c) { 
    double f = 1.8 * c + 32; 
    return f; 
}

double fahrenheitToCelsius(double f) { 
    double c = ((double)f - 32) * 5/9;
    return c; 
}

int main() { 
    cout << "Enter the temperature: "; 
    double t; 
    cin >> t; 
    char unit; 
    cout << "Enter the unit 'f' or 'c':"; 
    cin >> unit; 
    if (unit == 'c') { 
        cout << celsiusToFahrenheit(t) << endl; 
    } else if (unit == 'f') { 
        cout << fahrenheitToCelsius(t) << endl; 
    }
}