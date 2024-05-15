#include<iostream> 
using namespace std; 

int main() { 
    int a[14] = { 10, 12, 2, 19, 25, 100, 17, -3, 0, 5, 123, 55, 66, 9};
    for(int i = 0; i < 14; i++) { 
        int min = a[i]; 
        int minPos = i; 
        // select
        for(int j = i; j < 14; j++) { 
            if (a[j] < min) { 
                min = a[j]; 
                minPos = j; 
            }
        }
        // swap
        int temp = a[i];
        a[i] = min; 
        a[minPos] = temp; 
    }

    for(int i = 0; i < 14; i++) { 
        cout << a[i] << ", ";
    }
    cout << endl; 
}