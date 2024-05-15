#include<iostream>
using namespace std; 
int main() { 
    int i = 0; 
    int s = 0; 
    while (i <= 1000) { 
        if (i % 2 == 1) { 
            s += i; 
        }
        i++; 
    }
    cout << s << endl; 

    // alternative way
    i = 1; 
    s = 0; 
    while (i <= 1000) { 
        s += i; 
        i+=2; 
    }
    cout << s << endl; 
}