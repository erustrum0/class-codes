#include<iostream>
using namespace std; 
int main() { 
    string s = "saddleback college";
    cout << s.length() << "\n"; 
    cout << s[0] << endl; 
    cout << s[17] << endl; 
    s[2] = ' ';
    cout << s << endl; 

    int x, y; 
    cin >> x >> y; 
    cout << x << ", " << y << endl; 
    cin.ignore(); 
    string s1, s2; 
    getline(cin, s1); 
    getline(cin, s2); 
    cout << s1  << endl << s2 << endl; 
}