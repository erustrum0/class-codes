#include<iostream> 
#include<fstream> 
using namespace std; 

void readArray(int arr[10], string fn) { 
    ifstream f(fn);
    for(int i = 0; i < 10; i++) { 
        f >> arr[i];
    }
}

int main() { 
    int a[10], b[10];
    readArray(a, "filea.txt");
    readArray(b, "fileb.txt");
    for(int i = 0; i < 10; i++) { 
        int count = 0; 
        for(int j = 0; j < 10; j++) { 
                if (a[i] > b[j]) {
                count++; 
            } 
        }
        if (count >= 5) { 
            cout << a[i] << endl; 
        }
    }
}