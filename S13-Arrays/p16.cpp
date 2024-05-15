#include<iostream>
using namespace std; 

void printSumofEachCol(int a[][5], int r, int c) { 
    cout << "Sum of each row: \n";
    for(int c = 0; c < 5; c++) {
        int sum = 0; 
        for(int row = 0; row < r; row++) {
            sum += a[row][c]; 
        }
        cout << "col #" << c << ": " << sum << "\n";
    }
}

int main() { 
    int a[4][5];
    for(int r = 0 ; r < 4; r++) { 
        for(int c= 0; c < 5; c++) { 
            cin >> a[r][c];
        }
    }
    printSumofEachCol(a, 4, 5);
}