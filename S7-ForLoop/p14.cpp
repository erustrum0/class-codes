// Write a C++ program that receives number of items in an invoice 
// from the user (let's say there are n items) and then receives price 
// of those n items from the user and prints total of prices of all 
// items. Use a for loop to solve this problem. 
#include<iostream> 
using namespace std; 
int main() { 
    int n; 
    cout << "Number of items? "; 
    cin >> n; 
    float sum = 0; // scope of sum is inside the main code block
    for(int c = 0; c < n; c++) { // scope of c is only inside the for code block
        float price; // scope of price is only insdie the for code block
        cout << "Price of item #" << c << ":"; 
        cin >> price; 
        sum += price; 
    }
    cout << sum << endl; 
}
