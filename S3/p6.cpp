#include<iostream> 
using namespace std; 
int main() { 
    char ch; 
    cin >> ch; 
    if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or 
        ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U') { 
        cout << "The char is vowel!" << endl; 
    } else { 
        cout << "The char is consenant!" << endl; 
    }
}