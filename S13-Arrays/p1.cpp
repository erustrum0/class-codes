#include<iostream>
using namespace std; 

int main() { 
    int heights[5]; 
    for(int i = 0; i < 5; i++) {
        cin >> heights[i]; 
    }

    for (int h: heights) { 
        cout << h << " "; 
    }
    cout << endl; 
}