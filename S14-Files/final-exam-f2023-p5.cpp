#include<iostream> 
using namespace std; 


int main() { 
    string s; 
    getline(cin, s);
    int maxCount; 
    char charWithMaxCount; 
    for(int i = 0; i < s.length(); i++) { 
        int count = 0;
        if (s[i] == ' ') { 
            continue; // assuming the first character is not space charcter
        }
        for (int j = 0; j < s.length(); j++) { 
            if(s[i] == s[j]) { 
                count++; 
            }
        }
        // assuming the first character is not space charcter        
        if (i == 0 || count > maxCount) { 
            maxCount = count; 
            charWithMaxCount = s[i];
        }
    }
    cout << maxCount << ", " << charWithMaxCount << endl; 
}