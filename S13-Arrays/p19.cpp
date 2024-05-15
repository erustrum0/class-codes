#include<iostream>
using namespace std; 

void printArray(int arr[2][4], int row, int col) { 
    for(int r = 0 ; r < row; r++) { 
        for(int c= 0; c < col; c++) { 
            cout << arr[r][c] << " ";
        }
        cout << endl; 
    }
}

int main() { 
    int a[2][3], b[3][4], res[2][4];
    for(int r = 0 ; r < 2; r++) { 
        for(int c= 0; c < 3; c++) { 
            cin >> a[r][c];
        }
    }

    for(int r = 0 ; r < 3; r++) { 
        for(int c= 0; c < 4; c++) { 
            cin >> b[r][c];
        }
    }

    for(int r = 0; r < 2; r++) { // for every row of res matrix
        for(int c = 0; c < 4; c++) { // for every col of res matrix
            // generate one element of res matrix which is dot product of a row of A and a col of B
            int t = 0;
            for(int k = 0; k < 3; k++) { 
                t += a[r][k] * b[k][c]; 
            }
            res[r][c] = t; 
        }
    }
    printArray(res, 2, 4);
}