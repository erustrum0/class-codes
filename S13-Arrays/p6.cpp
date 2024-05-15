#include<iostream>
using namespace std; 

bool doesArrayIncludeNumber(int arr[], int size, int num) { 
    bool found = false;
    for(int j = 0; j < size; j++) { 
        if (arr[j] == num) {
            found = true; 
            break; // out of the inner loop
        }
    }
    return found; 
}

int main() { 
    int a[5], b[5]; 
    for(int i = 0; i < 5; i++) { 
        cin >> a[i];
    }

    for(int i = 0; i < 5; i++) { 
        cin >> b[i];
    }

    bool sameArrays = true; 
    for(int i = 0; i < 5; i++) { // for array a
        // compare a[i] to every number in b
        bool found = doesArrayIncludeNumber(b, 5, a[i]);
        if (!found) { 
            sameArrays = false; 
            cout << "Arrays don't have same numbers!\n";
            break; 
        }
    }
    if (sameArrays) { 
        cout << "Arrays have same numbers\n";
    }
}