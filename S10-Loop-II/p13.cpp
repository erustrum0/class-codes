#include<iostream>
using namespace std; 
int main() { 
    //cout << (int)'a' << (int)'A' << (int)'Z' << (int)'z'; 
    string s; 
    getline(cin, s);

    string s1 = "";
    for(int i = 0; i < s.length(); i++) { 
        if (s[i] >= 'A' and s[i] <= 'z') { 
            s1 += s[i];
        }
    }
    s = s1;

    for(int start=0; start<s.length() - 1; start++) { 
        for(int end=start+1; end<s.length(); end++) { 
            int i = start; 
            int j = end; 
            bool pal = true; 
            // check if from start to end is palindrom
            while(i < j) { 
                if (s[i++] != s[j--]) {
                    pal = false; 
                    break;
                }
            }
            // if it is pal, then print it (from start to end)
            if (pal) { // (pal == true)
                int k = start; 
                while (k <= end) { 
                    cout << s[k++]; 
                }
                cout << endl; 
            }
        }
    }
}