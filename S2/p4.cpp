// Write a program to get the price of an item and print its price + 9% tax. 

#include<iostream>
using namespace std; 

int main() { 
    double price; 
    cout << "Enter the price: ";
    cin >> price;
    double pricePlusTax = price + price * 0.09;
    cout << "Price plus 9 percent tax will be:" << pricePlusTax << endl;
}