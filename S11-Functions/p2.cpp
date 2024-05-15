#include<iostream>
using namespace std; 

bool isPalindrome(string str) { 
    int i = 0; 
    int j = str.length() - 1; 
    while (i < j) { 
        if (str[i] != str[j]) { 
            // as soon as we see the string is not palindrome we return false
            // in this case as soon as we return, the function ends and loop will not continue
            return false; 
        }
        i++; 
        j--; 
    }
    // if we get to this line, that means the string is palindrome.
    return true; 
}

int main() { 
    string s; 
    for (int i = 0; i < 3; i++) {
        cin >> s; 
        cout << isPalindrome(s) << endl; 
    }
    cout << isPalindrome("racecar") << endl; 
    cout << isPalindrome("redcar") << endl; 
    cout << isPalindrome("greencar") << endl; 
}