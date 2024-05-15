//Full Name Input: Design a program to read both the first and last names of a person into a single string variable. Print out the full name on the screen. Implement the program using both cin and getline for input to understand the differences in handling spaces and multiple words.

#include<iostream>
using namespace std; 
int main() { 
    cout << "Enter first and last name:";
    string fullname1;
    // if the input is more than one word with cin, only the first word is going to be read into the string
    // in this case if we would like to read more than one word into a sinle string var, we should use getline(cin, v)
    cin >> fullname1; 
    cout << fullname1 + "\n";
}