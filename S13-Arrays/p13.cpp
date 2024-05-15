#include<iostream>
using namespace std; 

void readArray(int a[], int size) { 
    cout << "Enter the array:";
    for(int i = 0 ;i < size; i++) { 
        cin >> a[i];
    }
}

int calculateSum(int a[], int size) { 
    int s = 0; 
    for(int i = 0; i < size; i++) { 
        s += a[i];
    }
    return s; 
}

double average(int a[], int size) { 
    // we have the sum in the main, but we calculate it again. we could pass it to this function from main
    int sum = calculateSum(a, size);
    return (double) sum / size; 
}

int main() { 
    int a[5]; 
    readArray(a, 5); 
    int sum = calculateSum(a, 5);
    double avg = average(a, 5);
    cout << sum << ", " << avg << endl; 
}