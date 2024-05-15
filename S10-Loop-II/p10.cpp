#include<iostream>
using namespace std; 
int main() { 
    string s, res = ""; 
    cin >> s;
    for(int i = 0; i < s.length(); i++) { 
        // check if s[i] is in output string (res)
        bool isTheCharAlreadyInOutputString = false; 
        for(int j = 0; j < res.length(); j++) { 
            if (res[j] == s[i]) { 
                isTheCharAlreadyInOutputString = true; 
                break; 
            }            
        }
        // endregion
        if (isTheCharAlreadyInOutputString == false) { 
            res += s[i];
        }
    }
    cout << res << endl; 
}