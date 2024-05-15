#include<iostream>
using namespace std; 
int main() { 
    int n; 
    cin >> n; 
    for(int line = 0; line < n; line++) { 
        for (int pos = 0; pos < n; pos++) { // prints one line of stars (10 stars)
            cout << "* ";
        }
        cout << endl; 
    }
}