// Develop a C++ program that uses a for loop to calculate and print the
// sum of the squares of the first 15 positive integers (1^2 + 2^2 + 3^2 + ... + 15^2).

#include<iostream>
using namespace std; 
int main() { 
    int sum = 0; 
    for(int i = 1; i <= 15; i++) { 
        //cout << i * i << endl;
        sum = sum + (i * i); 
    }
    cout << sum << endl; 
}