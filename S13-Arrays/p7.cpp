#include<iostream>
using namespace std; 

int main() { 
    int a[6];
    for(int i = 0; i < 6; i++) { 
        cin >> a[i];
    }
    //reversing: 
    int i = 0; 
    int j = 5; 
    while (i < j) { 
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp; 
        i++; 
        j--;
    }

    for(int i : a) { 
        cout << i << " "; 
    }
    cout << endl; 
}