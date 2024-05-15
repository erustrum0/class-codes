// String Concatenation: Develop a program that takes two strings as input from the user, concatenates them, and displays the resulting concatenated string.

#include<iostream>
using namespace std; 
int main() {
    string word1, word2; 
    cout << "Enter two words? ";
    cin >> word1 >> word2; 
    string concat = word1 + " " + word2; 
    cout << concat << endl; 
}