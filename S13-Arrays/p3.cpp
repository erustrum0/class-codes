//12, 2, 5, 9, 13, 3, 23, 9, 0, 55
#include<iostream>
using namespace std; 

int main() { 
    int a[10];
    for(int i = 0; i < 10; i++) { 
        cin >> a[i];
    }

    for (int i = 0; i < 10; i+=2) { 
        if (a[i] > a[i+1]) { 
            int t = a[i];
            a[i] = a[i+1]; 
            a[i+1] = t; 
        }
    }

    for(int i = 0; i < 10; i++) { 
        cout << a[i] << " ";
    }
    cout << endl; 
}