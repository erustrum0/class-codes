// Write a C++ program that calculates the sum of all even 
// numbers from 1 to 50 using a for loop.
#include<iostream> 
using namespace std; 
int main() {
    int sum = 0;  
    for(int i = 1; i < 51; i++) { 
        if (i%2 == 0) { 
            sum = sum + i; 
        }
    }
    cout << sum << endl; 
    // alternative solution
    int sum2 = 0;  
    for(int i = 2; i < 51; i = i+2) { 
        sum2 = sum2 + i;
    }
    cout << sum2 << endl; 

    // alternative solution
    int sum3 = 0;  
    for(int i = 2; i < 51;i = i + 2) { 
        sum3 = sum3 + i;
        
    }
    cout << sum3 << endl; 
}
