// Write a C++ program that uses a for loop to print all
// the multiples of 7 between 50 and 200.
#include <iostream>
using namespace std;
int main()
{
    for (int i = 50; i < 201; i++)
    {
        if (i % 7 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    for (int i = 56; i < 201; i+=7) { 
        cout << i << " ";
    }
    cout << endl; 
}
