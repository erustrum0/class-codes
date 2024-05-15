#include<iostream> 
using namespace std; 

void swapValues1(int x, int y) { 
    int temp = x; 
    x = y;
    y = temp; 
}

void swapValues2(int &x, int &y) { 
    int temp = x; 
    x = y;
    y = temp;     
}

int main() { 
    int a = 10; 
    int b = 500;
    swapValues1(a, b);
    cout << a << " " << b << endl;

    swapValues2(a, b);
    cout << a << " " << b << endl;
}