#include<iostream> 
using namespace std; 
int main() { 
    int n; 
    cout << "enter a number:"; 
    cin >> n; 
    if (n % 2 == 1) {
        cout << "Number is odd!" << endl; 
    } else { 
        cout << "Number is even!" << endl; 
    }
}