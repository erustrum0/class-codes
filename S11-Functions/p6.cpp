#include<iostream>
using namespace std; 

void printSeq(int n) { 
    for(int i = 1; i <= n; i++) { 
        cout << i << ", ";
    }
    cout << endl; 
}

int main() { 
    int x; 
    cin >> x; 
    printSeq(x);
}