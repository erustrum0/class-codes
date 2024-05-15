// Create a C++ program that uses a for loop to repeatedly ask the user 
// for a positive integer until they enter a negative number. Keep track
// of how many positive integers were entered and display that count at the end.

#include<iostream> 
using namespace std; 
int main() { 
    int num; 
    int counter = 0; 
    for(;;) { 
        cout << "Enter a number:"; 
        cin >> num; 
        if (num >= 0) { 
            counter++;
        } else { 
            break;
        }
    }
    cout << counter << endl; 
    //alternative approach: 
    for(int counter = 0;;counter++) { 
        cin >> num; 
        if (num < 0) { 
            cout << counter << endl; 
            break; 
        }
    }
    //alternative aproach 
    for(int counter1 = 0;num > 0;counter1++) { 
        cin >> num; 
        if (num < 0) { 
            cout << --counter1 << endl; 
        }
    }
}