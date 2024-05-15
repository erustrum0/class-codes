#include<iostream>
using namespace std; 
int main() { 
    int n1 = 0, n2 = 1, nextNumber = 1; 
    int targetNumber; 
    cin >> targetNumber; 
    cout << 0 << ", " << 1; 
    while (targetNumber > nextNumber) { 
        nextNumber = n1 + n2; 
        if (nextNumber > targetNumber) { break; }
        cout << ", " << nextNumber; 
        n1 = n2; 
        n2 = nextNumber; 
    }
    cout << endl; 
}