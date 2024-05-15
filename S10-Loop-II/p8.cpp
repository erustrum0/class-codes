#include<iostream>
using namespace std; 
int main() { 
    string s; 
    cin >> s; 
    if (s.length() != 16) { 
        cout << "The text should be 16 chars!\n";
    } else { 
        int k = 0; 
        for(int row = 0; row < 4; row++) { 
            for(int col = 0; col < 4; col++) { // deals with cols of 1 row
                cout << s[k++] << " "; 
            }
            cout << endl ;
        }
        cout << endl; 
        // alternative solution
        for(int row = 0; row < 4; row++) { 
            for(int col = 0; col < 4; col++) { // deals with cols of 1 row
                cout << s[row * 4 + col] << " "; 
            }
            cout << endl ;
        }
    }
}