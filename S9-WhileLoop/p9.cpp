#include<iostream> 
using namespace std; 

int main() { 
    string s; 
    getline(cin, s); 
    string res = "";
    int i = 0; 
    while (i < s.length()) { 
        if (s[i] != ' ') { 
            res += s[i];
        }
        i++;
    }
    cout << res << endl; 
}