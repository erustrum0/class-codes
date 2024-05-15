#include<iostream>
using namespace std; 
int main() { 
    string s; 
    getline(cin, s); 
    int i = 0; 
    bool isStartOfaWord = true; 
    while (i < s.length()) { 
        if (isStartOfaWord == true) { 
            s[i] = (s[i] > 96 and s[i] < 123) ? s[i] - 32 : s[i]; 
        }
        if (s[i] == ' ') { 
            isStartOfaWord = true;
        } else { 
            isStartOfaWord = false;
        }
        i++; 
    }
}