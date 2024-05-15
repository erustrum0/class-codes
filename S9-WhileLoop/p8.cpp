#include<iostream> 
using namespace std; 

int main() { 
    int ratio = 2; 
    int term = 1; 
    int i = 0;
    while (i < 10) { 
        cout << term << endl; 
        term *= ratio;
        i++; 
    }
}