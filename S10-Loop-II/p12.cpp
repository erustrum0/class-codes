#include<iostream>
using namespace std; 
int main() { 
    string w1, w2; 
    cin >> w1 >> w2; 
    bool anagrams = true; 
    for(int i = 0; i < w1.length(); i++) {
        char ch = w1[i];
        bool found = false; 
        for(int j = 0; j < w2.length(); j++) { 
            if (ch == w2[j]) { 
                found = true; 
                break; // breaks out of the inner loop because it is the loop including this break statement
            }
        }
        if (!found) { // if (found == false)
            anagrams = false; 
            break; // breaks out of the outer loop because it is the loop including this break statement
        }
    }
    if (anagrams) { // if (anagrams == true)
        cout << "The two words are anagrams!\n";
    } else { 
        cout << "The two words are NOT anagrams!\n";
    }
}