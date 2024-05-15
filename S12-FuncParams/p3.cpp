#include<iostream> 
using namespace std; 

void sum(int x, int y, int &z) {
    z = x + y; 
    x = 20; // just for testing  
    y = 20; // just for testing  
} 

int main() { 
    int a = 5; 
    int b = 10; 
    int s = 10000; 
    sum(a, b, s); 
    cout << s << endl; 
    cout << a << " " << b << endl; 
}
