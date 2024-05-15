// Replace Character: Create a program that receives a text string
// from the user and replaces all occurrences of a specified character
// with another character of the user's choice. 
// Print the modified string.
#include<iostream> 
using namespace std; 
int main() { 
    string s; 
    getline(cin, s); 
    char ch1, ch2; 
    cin >> ch1 >> ch2; 
    
    for(int i = 0; i < s.length(); i++) { 
        if (s[i] == ch1) { 
            s[i] = ch2; 
        }
    }
    cout << s << endl; 
}

