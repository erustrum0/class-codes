// 12, 2, 5, 9, 13, 3, 23, 9, 0, 7
#include<iostream>
using namespace std; 

int findSecondMax(int a[], int size) { 
    int max1, max2; 
    if (a[0] > a[1]) { 
        max1 = a[0]; 
        max2 = a[1]; 
    } else { 
        max1 = a[1];
        max2 = a[0];
    }

    for(int i = 2; i < size; i++) { 
        if (a[i] > max1) { 
            max2 = max1; 
            max1 = a[i];
        } else if (a[i] > max2) { 
            max2 = a[i];
        }
    }    
    return max2; 
}

int main() {
    int arr[10]; 
    for(int i = 0; i < 10; i++) { 
        cin >> arr[i];
    }
    int secondMax = findSecondMax(arr, 10);
    cout << secondMax << endl; 
}