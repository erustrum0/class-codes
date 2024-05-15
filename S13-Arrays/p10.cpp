#include<iostream>
using namespace std; 

void readArray(int a[], int size) { 
    cout << "Enter the array:";
    for(int i = 0 ;i < size; i++) { 
        cin >> a[i];
    }
}

int countOfNumInArr(int a[], int size, int x) {
    int c = 0; 
    for(int i = 0; i < size; i++) { 
        if (a[i] == x) { 
            c++;
        }
        // c = (a[i] == x) ? c + 1 : c; 
    }
    return c;
}

int main() { 
    int arr[8];
    int numToFind; 
    cout << "num to find: "; 
    cin >> numToFind; 
    readArray(arr, 8);
    int count = countOfNumInArr(arr, 8, numToFind); 
    cout << "count: " << count << endl; 
}