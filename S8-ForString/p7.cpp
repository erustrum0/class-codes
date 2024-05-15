#include<iostream> 
using namespace std; 
int main() { 
    string s; 
    getline(cin , s); 
    string nextWord = "";
    string rev = "";
    for (int i = 0; i < s.length(); i++) { 
        if (s[i] == ' ') { 
            //cout << nextWord << endl;
            rev = nextWord + ' ' + rev;
            nextWord = "";
        } else { 
            nextWord += s[i];
        }
    }
    rev = nextWord + ' ' + rev; 
    cout << rev << endl;
}