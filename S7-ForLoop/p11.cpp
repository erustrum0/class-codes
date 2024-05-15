// Write a C++ program that uses a for loop to find the sum of all 
// numbers from 1 to 100 that are divisible by both 3 and 5.
#include<iostream> 
using namespace std; 
int main() { 
    int sum = 0; 
    for (int i = 1; i < 101; i++) { 
        if (i % 5 == 0 && i % 3 == 0) { 
            sum = sum + i; // sum += i; 
        }
    }
    cout << sum << endl; 
}
