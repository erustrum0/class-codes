#include<iostream>
using namespace std; 
int main() { 
    int n, m; 
    cin >> n >> m; 
    char ch = 'X';
    for (int i = 0; i < n; i++) { // rows
        ch = (i % 2 == 0) ? 'X' : 'O';
        for(int j = 0; j < m; j++) { // cols in a row
            cout << ch;
            ch = (ch == 'X') ? 'O' : 'X';
        }
        cout << endl; 
    }
    // alternative solutino 
    cout << "\n********************\n\n";
    for (int i = 0; i < n; i++) { // rows
        for(int j = 0; j < m; j++) { // cols in a row
            ch = ((i+j) % 2 == 0) ? 'X' : 'O';
            cout << ch;
        }
        cout << endl; 
    }

}