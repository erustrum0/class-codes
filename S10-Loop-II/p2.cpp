#include<iostream>
using namespace std; 
int main() { 
    string word, rev = "";
    
    do { 
        rev = "";
        cin >> word; 
        for (int i = 0; i < word.length(); i++) { 
            rev = word[i] + rev; 
        }
        cout << rev << endl; 
    } while (word != "stop"); 

}