#include<iostream>
using namespace std; 
int main() {
    string s; 
    getline(cin, s); 
    char ch; 
    cin >> ch; 
    ch = (ch > 96 and ch < 123) ? ch - 32 : ch; // to uppercase
    int i = 0; 
    int count = 0; 
    while (i < s.length()) {
        char ch1 = (s[i] > 96 and s[i] < 123) ? s[i] - 32 : s[i]; // converting s[i] to uppercase and storing it into ch1
        if (ch == ch1) {
            count++; 
        }
        i++; 
    }
    cout << count << endl; 
}