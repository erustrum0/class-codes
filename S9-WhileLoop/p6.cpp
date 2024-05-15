#include<iostream> 
using namespace std; 
int main() { 
    int n; 
    cin >> n; 
    int fact = 1; 
    int i = 2; 
    while (i <= n) { 
        fact *= i; 
        i++;
    }
    cout << fact << endl; 
    // alternative solution 
    fact = 1; 
    while (n > 1) { 
        fact *= n; 
        n--;
    }
    cout << fact << endl; 

}