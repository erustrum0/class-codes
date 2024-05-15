// Write a program that receives a number and prints on the screen 
//a sentence about if the number is greater than 10 or less than 10. 
#include<iostream>
using namespace std; 
int main() { 
    int num; 
    cout << "Enter a number:"; 
    cin >> num; 
    if (num > 10) { 
        cout << "the number is greater than 10" << endl;
    } else { 
        cout << "the number isn't great than 10" << endl; 
    }
}
