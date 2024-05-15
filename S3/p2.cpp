/*Write a program that receives a number from user and 
prints "Great!" on the screen if the number is 20, 
otherwise prints nothing on the screen. 
*/
#include<iostream> 
using namespace std; 

int main() { 
    int num; 
    cout << "Enter a number. Our great number is 20: ";
    cin >> num; 
    if (num == 20) { 
        cout << "Great!" << endl; 
    }
}