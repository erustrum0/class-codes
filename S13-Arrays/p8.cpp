#include<iostream>
using namespace std; 

bool find(int a[], int size, int num) { 
    for(int i = 0; i < size; i++) { 
        if (a[i] == num) { 
            return true; 
        }
    }
    return false; 
}

int main() { 
    int a[10];
    for(int i = 0; i < 10; i++) {  
        cin >> a[i];
    }

    int x; 
    do { 
        cin >> x; 
        if (find(a, 10, x)) { 
            cout << "Found\n";
        } else { 
            cout << "Not found\n";
        }
    } while (x != 0);
}