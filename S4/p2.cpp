// Ask the user to input the current hour (in 24-hour format). Based on the hour, 
// classify and print whether it's morning, afternoon, evening, or night.

#include<iostream>
using namespace std; 
int main() { 
    float hour; 
    cout << "What is the hour in 24h format? "; 
    cin >> hour; 
    if (hour < 0) { 
        cout << "Out of range"; 
    } else if (hour < 12) { 
        cout << "It is morning!";
    } else if (hour < 16) { 
        cout << "It is afternoon!";
    } else if (hour < 18) { 
        cout << "It is evening!";
    } else if (hour <= 24) { 
        cout << "It is night!";
    } else { 
        cout << "Out of range";
    }
    cout << endl; 
}