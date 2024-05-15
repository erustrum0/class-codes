#include<iostream>
using namespace std; 

void getArray(int arr[2][3], int row, int col) { 
    for(int r = 0 ; r < row; r++) { 
        for(int c= 0; c < col; c++) { 
            cin >> arr[r][c];
        }
    }
}

void printArray(int arr[2][3], int row, int col) { 
    for(int r = 0 ; r < row; r++) { 
        for(int c= 0; c < col; c++) { 
            cout << arr[r][c] << " ";
        }
        cout << endl; 
    }
}

int main() { 
    int a[2][3], b[2][3], res[2][3];
    getArray(a, 2, 3);
    getArray(b, 2, 3);

    for(int r = 0 ; r < 2; r++) { 
        for(int c= 0; c < 3; c++) { 
            res[r][c] = a[r][c] + b[r][c];
        }
    }
    printArray(res, 2, 3);
}