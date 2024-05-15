/*
Write a program that reads the expiration year of a DL from the 
input and if it is greater than 2023 then assign the value of "Not Expired" 
to a string variable otherwise assigns value of "Expired" to the string 
variable. Use short hand if/else to assign the value to string variable. 
*/
#include<iostream>
using namespace std; 
int main() { 
    int expYear; 
    cout << "What is expiration year? "; 
    cin >> expYear; 
    string expiredOrNot; 
    expiredOrNot = (expYear > 2023) ? "Not Expired" : "Expired"; 
    cout << expiredOrNot << endl; 
}