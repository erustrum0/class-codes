#include<iostream> 
using namespace std; 

double calculateInterest(double principal, double rate = 5, int time = 1) { 
    double interest = principal * rate/100 * time; 
    return interest; 
}

int main() { 
    cout << calculateInterest(10000) << endl; 
    cout << calculateInterest(10000, 10) << endl; 
    cout << calculateInterest(10000, 10, 2) << endl; 
}