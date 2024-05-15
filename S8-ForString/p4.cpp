// Palindrome Check: Develop a program that checks if a given text string is a palindrome. A palindrome is a word, phrase, or sequence that reads the same backward as forward. 

#include<iostream>
using namespace std; 

int main() { 
    string s; 
    getline(cin, s);
    bool palindrome = true; 

    for(int i = 0, j = s.length() - 1;i < j;i++, j--) { 
        
        if (s[i] != s[j]) { 
            palindrome = false; 
            break;
        }
    }

    if (palindrome == true) { // if (palindrome)
        cout << "The entered text is palindrome!\n";
    } else { 
        cout << "The entered text is NOT palindrome!\n";
    }
}

