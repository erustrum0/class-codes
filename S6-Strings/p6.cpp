//Character Replacement: Write a program that receives a text input from the user, replaces its first and last character with "S", and then prints out the modified text.

#include<iostream>
using namespace std; 
int main() { 
    cout << "Enter a string:";
    string str; 
    getline(cin, str);
    cout << str + "\n";
    str[0] = 's';
    int len = str.length(); 
    str[len - 1] = 's';
    cout << str + "\n"; 
}