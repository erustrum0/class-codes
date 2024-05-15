#include<iostream> 
#include<fstream> 
using namespace std; 

int findMax(int a[], int size) { 
    int max = a[0];
    for(int i = 1; i < size; i++) { 
        max = max > a[i] ? max : a[i];
    }
    return max; 
}

int findMin(int a[], int size) { 
    int min = a[0];
    for(int i = 1; i < size; i++) { 
        min = min < a[i] ? min : a[i];
    }
    return min; 
}

void readArray(int a[], int size, string fn) { 
    ifstream f(fn);
    for(int i = 0; i < size; i++) { 
        f >> a[i];
    }
}

int main() { 
    int a[14];
    readArray(a, 14, "p2-input.txt");
    cout << findMax(a, 14) << endl; 
    cout << findMin(a, 14) << endl;     
}