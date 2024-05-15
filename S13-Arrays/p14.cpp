#include<iostream>
using namespace std; 

void printDiagonal(int a[][4], int r, int c) { 
    // it is given that number of rows and columns are the same
    for(int i = 0; i < r; i++) { 
        cout << a[i][i] << " ";
    }
    cout << endl; 
}

int main() { 
    int a[4][4];
    for(int r = 0 ; r < 4; r++) { 
        for(int c= 0; c < 4; c++) { 
            cin >> a[r][c];
        }
    }
    printDiagonal(a, 4, 4);
}

