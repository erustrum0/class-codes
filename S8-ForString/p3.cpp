// Reverse String: Write a program that reverses a given 
// text string. For example, if the input is "hello," the 
// program should output "olleh."

#include<iostream>
using namespace std; 

int main() { 
    string s; 
    getline(cin, s);
    string rev = "";
    for(int i = 0; i < s.length(); i++) { 
        rev = s[i] + rev; 
    }

    cout << rev << endl; 
}

