#include<iostream>
using namespace std; 
int main() { 
    int n; 
    cout << "Enter a number:"; 
    cin >> n; 
    n = n % 7; 
    if (n == '1') { 
        cout << "Sunday!" << endl; 
    } else if (n == 2) { 
        cout << "Monday!" << endl; 
    } else if (n == 3) { 
        cout << "Tuesday!" << endl; 
    } else if (n == 4) { 
        cout << "Wednesday!" << endl; 
    } else if (n == 5) { 
        cout << "Thursday!" << endl; 
    } else if (n == 6) { 
        cout << "Friday!" << endl; 
    } else if (n == 0) { 
        cout << "Saturday!" << endl; 
    }
    // 1 % 7 = 1, 2 % 7 = 2, ... , 6 % 7 = 6, 7 % 7 = 0, 8 % 7 = 1
}