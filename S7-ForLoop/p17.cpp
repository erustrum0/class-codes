// Develop a C++ program that uses a for loop to repeatedly ask the user for 
// a number and adds it to a running total. The loop should continue until 
// the user enters 0. After exiting the loop, display the total.
#include<iostream> 
using namespace std; 
int main() { 
    float total = 0; 
    float num = -1; 
    for(;num != 0;total+=num) { 
        cin >> num; 
    }
    // alternative loop
    // for(;;) { 
    //     cin >> num; 
    //     total += num; 
    //     if (num == 0) { 
    //         break; 
    //     }
    // }
    cout << total << endl; 
}
