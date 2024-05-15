// Develop a program that checks if a user-entered character 
// is the character a or not and print out a message. 
#include<iostream> 
using namespace std; 
int main() { 
    char ch; 
    cout << "Enter a char:";
    cin >> ch; 
    if (ch == 'a') { 
        cout << "The character is a!" << endl; 
    } else { 
        cout << "The character isn't a!" << endl; 
    }
}
