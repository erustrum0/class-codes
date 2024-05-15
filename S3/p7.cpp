#include<iostream>
using namespace std; 
 int main() { 
    int n1, n2, n3; 
    cout << "Enter 1st number:"; 
    cin >> n1; 
    cout << "Enter 2nd number:"; 
    cin >> n2; 
    cout << "Enter 3rd number:"; 
    cin >> n3; 

    int max = n1;
    if (n2 > max) { 
        max = n2; 
    }
    if (n3 > max) { 
        max = n3; 
    }

    cout << "Max value among the three numbers is: " << max << endl; 
}