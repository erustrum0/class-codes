# Quiz #6
#include<iostream> 
using namespace std; 
int main() { 
    int min; 
    int num; 
    for(int i = 0; i < 9; i++) { 
        cin >> num; 
        if (i == 0 or num < min) { 
            min = num; 
        }
    }
    cin >> num; 
    if (num < min) { 
        cout << "Yes";
    } else { 
        cout << "No";
    }
}