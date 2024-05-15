//Write a C++ program that uses a for loop to print even numbers from 2 to 20 (inclusive).
#include<iostream>
using namespace std; 
int main() { 
    for(int counter = 2; counter <= 20; counter++) { 
        if (counter % 2 == 0) { 
            cout << counter << " "; 
        }
    }
    cout << endl; 

    for(int counter = 2; counter <= 20; counter = counter+2) { // counter += 2;
        cout << counter << " "; 
    }
    cout << endl; 

}
