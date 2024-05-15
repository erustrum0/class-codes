// User Greeting: Create a C++ program that prompts the user for their name and displays a personalized welcome message.

#include<iostream>
using namespace std; 
int main() {
    string name; 
    cout << "What is your name? ";
    cin >> name; 
    string message = "Hi there " + name + "\n";
    cout << message; 
}