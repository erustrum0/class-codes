// Count Occurrences: Write a program that takes a text string
// and a character as input and counts the number of occurrences 
// of that character within the string.
#include<iostream> 
using namespace std; 
int main() { 
    string s; 
    getline(cin, s); 
    char ch;
    cin >> ch; 
    int counter = 0; 
    for(int i = 0; i < s.length(); i++) { 
        if (s[i] == ch) { 
            counter++; 
        }
    }
    cout << counter << endl; 
}

