#include<iostream>
using namespace std; 

void readArray(int a[], int size) { 
    cout << "Enter the array:";
    for(int i = 0 ;i < size; i++) { 
        cin >> a[i];
    }
}

void printArray(int a[], int size) { 
    for(int i = 0 ;i < size; i++) { 
        cout << a[i] << " "; 
    }
    cout << endl; 
}

int main() { 
    int a[4];
    int b[4];
    int c[8];
    readArray(a, 4); 
    readArray(b, 4);
    for(int i = 0; i < 4; i++) { 
        c[i] = a[i]; 
        c[i+4] = b[i]; 
    }
    printArray(c, 8);
}
