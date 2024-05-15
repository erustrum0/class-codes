// 12, 2, 5, 9, 13, 3, 23, 9, 0
#include<iostream>
using namespace std; 

int sumExceptMax(int a[], int size, int max) { 
    int sum = 0; 
    for(int i = 0; i < size; i++) { 
        if (a[i] != max) { // if there are repetions of the max value, all will be excluded with this solution
            sum += a[i];
        }
    }
    return sum; 
}


int main() { 
    int arr[9]; 
    int max; 
    for(int i = 0; i < 9; i++) { 
        cin >> arr[i];
        if (i == 0) { 
            max = arr[0];
        } else if (arr[i] > max) { 
            max = arr[i];
        }
    }
    // we could solve this problem without an array and many other probles in this section. 
    cout << sumExceptMax(arr, 9, max) << endl; 
}