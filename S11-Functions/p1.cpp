#include<iostream>
using namespace std; 

string removeNonAlphaChar(string str) { 
    // functino is called removeNonAlphaChar
    // function receives string called str
    // function returns a string -- str without non-alph chars 
    string s1 = "";
    for(int i = 0; i < str.length(); i++) { 
        if (str[i] >= 'A' and str[i] <= 'z') { 
            s1 += str[i];
        }
    }
    return s1; 
}

void printSubstring(string str, int s,int e) { 
    int k = s; 
    while (k <= e) { 
        cout << str[k++]; 
    }
    cout << endl; 
}

bool ifSubstrIsPal(string s, int i, int j) { 
    bool pal = true; 
    while(i < j) { 
        if (s[i++] != s[j--]) {
            pal = false; 
            break;
        }
    } 
    return pal; 
}

int main() { 
    string s; 
    getline(cin, s);
    s = removeNonAlphaChar(s);
    for(int start=0; start<s.length() - 1; start++) { 
        for(int end=start+1; end<s.length(); end++) {             
            bool palindrome = ifSubstrIsPal(s, start, end);    
            if (palindrome) {
                printSubstring(s, start, end);
            }
        }
    }
}