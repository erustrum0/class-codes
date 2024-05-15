#include<iostream>
using namespace std; 

int  findHighestRowSum(int a[3][4], int row, int col) { 
    int max; 
    for(int r = 0; r < row; r++) { 
        int sum = 0; 
        for (int c = 0; c < col; c++) { 
            sum += a[r][c];
        }
        if (r == 0) { 
            max = sum;
        } else if (sum > max) { 
            max = sum;
        }
    }
    return max; 
}

int main() { 
    int a[3][4];
    for(int r = 0 ; r < 3; r++) { 
        for(int c= 0; c < 4; c++) { 
            cin >> a[r][c];
        }
    }
    int m = findHighestRowSum(a, 3, 4);
    cout << m << endl; 
}