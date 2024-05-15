#include<iostream> 
using namespace std; 
int main() { 
    string s; 
    getline(cin , s); 
    string revNextWord = "";
    string rev = "";
    for (int i = 0; i < s.length(); i++) { 
        if (s[i] == ' ') { 
            //cout << nextWord << endl;
            rev =  rev + ' ' + revNextWord;
            revNextWord = "";
        } else { 
            revNextWord = s[i] + revNextWord; 
        }
    }
    rev = rev + ' ' + revNextWord; 
    cout << rev << endl;
}