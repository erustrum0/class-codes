//Character Exploration: Create a program that takes a text input from the user and prints out the first, second, and last characters of the input.

#include<iostream>
using namespace std; 
int main() { 
    cout << "Enter a string: ";
    string str1, str2; 
    cin >> str1; 
    cin >> str2; 
    // to ignore the enter character that was typed after entering values for str1 and str2
    // so it is not kept into the input buffer and later assigned to str3
    cin.ignore(); 
    cout << str1 + " " + str2 << endl; 
    string str3; 
    cout << "Enter a line of input:"; 
    getline(cin, str3);
    cout << str3 << endl; 
}