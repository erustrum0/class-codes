#include<iostream>
using namespace std; 

void readArray(int a[], int size) { 
    cout << "Enter the array:";
    for(int i = 0 ;i < size; i++) { 
        cin >> a[i];
    }
}

void printArray(int a[], int size) { 
    for(int i = 0; i < size; i++) { 
        cout << a[i] << " "; 
    }
    cout << endl; 
}

int main() { 
    int a[10], b[5];
    readArray(a, 10); 
    for(int i = 0; i < 5; i++) { 
        b[i] = a[i+2];
    }
    printArray(b, 5); 
}