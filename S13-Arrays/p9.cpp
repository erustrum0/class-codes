#include<iostream>
using namespace std; 

void getArray(int a[], int size) { 
    for(int i = 0; i < size; i++) { 
        cin >> a[i]; 
    }
}

void doubleElements(int a[], int size) { 
    for(int i = 0; i < size; i++) { 
        a[i] *= 2; 
    }
}

void printArray(int a[], int size) { 
    for(int i = 0; i < size; i++) { 
        cout << a[i] << " "; 
    }    
    cout << endl; 
}

int main() { 
    int arr[10];
    getArray(arr, 10);
    doubleElements(arr, 10); 
    printArray(arr, 10);
}