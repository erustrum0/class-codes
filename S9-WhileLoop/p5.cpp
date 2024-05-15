#include<iostream> 
using namespace std; 
int main() { 
    // 0123
    // alex
    // alan
    string n1, n2; 
    cin >> n1 >> n2; 
    int i = 0; 
    string firstname = n1; // for the case both names are equal 
    while (i < n1.length()) { 
        if (n1[i] < n2[i]) { 
            firstname = n1; 
            break; 
        } else if (n2[i] < n1[i]) { 
            firstname = n2; 
            break; 
        }
        i++; 
    }
    cout << firstname << endl; 
}