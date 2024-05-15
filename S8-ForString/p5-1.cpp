// Word Count: Create a program that receives a sentence from the user and counts the number of words in the sentence. A word is defined as a sequence of characters separated by spaces.
// Bonus Version: w/o the simple version assumption.

#include<iostream>
using namespace std; 

int main() { 
    string s; 
    getline(cin, s);
    int wordCount = 0; 
    bool wordStarted = false; 
    for(int i = 0; i < s.length(); i++) { 
        if ((s[i] >= 'a' and s[i] <= 'z') or (s[i] >= 'A' and s[i] <= 'Z')) { 
            wordStarted = true; 
        } else if (s[i] == ' ') { 
            if (wordStarted) {
                wordCount++; 
                wordStarted = false; 
            }
        }
    }
    if (wordStarted) { 
        wordCount++; 
    }
    cout << wordCount << endl; 
}

