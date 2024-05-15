// Create a program that asks the user for a number and uses a for 
// loop to print the multiplication table for that number up to 10.
#include<iostream>
using namespace std; 

int main() { 
    cout << "Enter a number for which you would like we print out the mul row:"; 
    int num; 
    cin >> num; 
    for(int i = 0; i < 11; i++) {
        cout << num * i << " ";
        //cout << i << " x " << num << " = " << i * num << endl;
    }

}
