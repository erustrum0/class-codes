#include<iostream>
using namespace std; 
int main() { 
    // int a = 'A'; //65
    // int b = 'Z'; //90
    // cout << a << " " << b << endl;
    // int a1 = 'a'; //97
    // int b1 = 'z'; // 122
    // cout << a1 << " " << b1 << endl;

    string s; 
    getline(cin, s); 
    int i = 0; 
    int vowelCounter = 0; 
    while(i < s.length()) { 
        char ch = (s[i] > 64 and s[i] < 91) ? s[i] + 32 : s[i]; // if s[i] is uppercase we store lowercase version of it in ch
        if (ch == 'a' or ch == 'e' or ch == 'i' or 
            ch == 'o' or ch == 'u') { 
                vowelCounter++;
            }
        i++;
    }
    cout << vowelCounter << endl; 
}