#include<iostream>
using namespace std; 

void printSumofEachRow(int a[][5], int r, int c) { 
    cout << "Sum of each row: \n";
    for(int i = 0; i < r; i++) {
        int sum = 0; 
        for(int x : a[i]) { 
            sum += x; 
        }
        cout << "row #" << i << ": " << sum << "\n";
    }
}

int main() { 
    int a[4][5];
    for(int r = 0 ; r < 4; r++) { 
        for(int c= 0; c < 5; c++) { 
            cin >> a[r][c];
        }
    }
    printSumofEachRow(a, 4, 5);
}

