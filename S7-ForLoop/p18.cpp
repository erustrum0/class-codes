// Write a C++ program that receives 5 positive numbers from the user and prints
// "Ascending" if numbers that are entered are in the ascending order. Use a for
// loop to solve this problem. Example of an ascending list: 1, 9, 25, 45, 129

#include<iostream> 
using namespace std; 
int main() { 
    int n1 = 0; 
    int n2 = 0; 
    bool asc = true; 
    for(int c = 0; c < 5; c++) { 
        cin >> n2; 
        if (n2 < n1) { 
            asc = false; 
            //break; 
        }
        n1 = n2; 
    }
    cout << "asc: " << asc << endl; 
}