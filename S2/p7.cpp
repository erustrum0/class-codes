//Write a program that converts temperature from Fahrenheit to Celsius.
#include<iostream>
using namespace std; 

int main() {
    float fahrenheit; 
    cout << "Enter the temparature in fahrenheit: ";
    cin >> fahrenheit; 
    //f = 1.8 * c + 32
    float celsius = (fahrenheit - 32)/1.8;
    cout << "The temperature in celcius is: " << celsius << endl; 
}
