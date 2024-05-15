//Change Multiple Characters: Write a program that receives a text input from the user, replaces its first, middle (if the length is even both middle characters) and last character with "s", and then prints out the modified text.

#include<iostream>
using namespace std; 
int main() { 
    cout << "Enter a string:";
    string str; 
    getline(cin, str);
    cout << str + "\n";
    int len = str.length(); 
    if (len > 0) { 
        str[0] = 's';
        str[len - 1] = 's';
        if (len % 2 == 0) { 
            str[len / 2] = 's';
            str[len / 2 - 1] = 's';
        } else { 
            str[len / 2] = 's';
        }
    }
    cout << str + "\n"; 
}