// Word Count: Create a program that receives a sentence from the user and counts the number of words in the sentence. A word is defined as a sequence of characters separated by spaces.
// Simple Version: Assume no two spaces are next to each other and there is no space at the beginning or end of the text. 
// Bonus Version: w/o the simple version assumption.

#include<iostream>
using namespace std; 

int main() { 
    string s; 
    getline(cin, s);
    int wordCount = 0; 
    for(int i = 0; i < s.length(); i++) { 
        if (s[i] == ' ') { 
            wordCount++; 
        }
    }
    cout << wordCount + 1 << endl; 
    
}

