// Longest Word: Write a program that receive a sentence and prints out length of the longest word in the string. The text has no punctuation and only words each separated by one space.
#include<iostream>
using namespace std; 
int main() { 
    string s; 
    getline(cin, s); 
    int maxLen = 0; 
    int curLen = 0; 
    string curWord = "";
    string maxLenWord = "";
    for(int i = 0; i < s.length(); i++) { 
        if (s[i] == ' ') { 
            if (curLen > maxLen) { 
                maxLen = curLen;
                maxLenWord = curWord; 
            }
            curLen = 0; 
            curWord = "";
        } else { 
            curLen++; 
            curWord += s[i];
        }
    }
    cout << "length of the word with max len in the string is: " << maxLen << endl; 
    cout << "word with max len in the string is: " << maxLenWord << endl; 
}
