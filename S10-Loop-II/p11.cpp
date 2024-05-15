#include<iostream>
using namespace std; 
int main() { 
    //cout << (int)'0' << ", " << (int)'9' << endl; 
    cout << "Enter a string including all digits: "; 
    string s; 
    cin >> s; 
    string res; 
    for(int i = 0; i < s.length(); i++) { // for every digit in the string
        // compare to all the subsequent digits in the string
        bool isSmallerThanAllSubsequentDigits = true; 
        for(int j = i+1; j < s.length(); j++) { 
            if (s[j] <= s[i]) { 
                isSmallerThanAllSubsequentDigits = false; 
                break; 
            }
        }        
        // end compare
        if (isSmallerThanAllSubsequentDigits) { 
            res = res + s[i];  //res += s[i];
        }
    }
    cout << res << endl; 
}