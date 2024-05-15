// Write a program that asks the user for a number and uses the for 
// loop to print all the even numbers between 1 and that number. 
#include<iostream> 
using namespace std; 
int main() { 
    cout << "Enter a number:";
    int n; 
    cin >> n; 
    for (int c = 0; c <= n; c++) { 
        if (c % 2 == 0) { 
            cout << c << endl; 
        }
    }
    // alternative approach
    for (int c = 0; c <= n; c+=2) { 
        cout << c << endl; 
    }
}

