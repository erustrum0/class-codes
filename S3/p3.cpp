// Write a program that receives 2 numbers from user and prints the 
// larger number on the screen with a message.
#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    if (n1 > n2)
    {
        cout << n1 << endl;
    } else { 
        cout << n2 << endl;
    }
}