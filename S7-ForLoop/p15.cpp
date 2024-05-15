// Write a C++ program that receives 5 positive numbers from the user and
// prints the highest value of them on the screen. Use a for loop to solve
// this problem. 
#include<iostream> 
using namespace std; 
int main() { 
    // float max = 0; // scope is the whole program so it can be used after the for loop
    // for (int i = 0; i < 5; i++) { 
    //     float x; 
    //     cout << "Enter next number:";
    //     cin >> x; 
    //     if (x > max) { 
    //         max = x; 
    //     }
    // }
    // cout << "Max is: " << max << endl;  
    // solution when not all numbers are positive? 
    float max = 0; 
    for (int i = 0; i < 5; i++) { 
        float x; 
        cout << "Enter next number:";
        cin >> x; 
        if (i == 0) { 
            max = x;
        }
        if (x > max) { 
            max = x; 
        }
    }
    cout << "Max is: " << max << endl;  
}
