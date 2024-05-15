#include<iostream>
using namespace std; 

int main() { 
    int nums[7];
    int i = 0; 
    while (i < 7) { 
        cin >> nums[i];
        i++; 
    }

    // we could do the additions in the above loop, but we do it here to make use of our array!
    int sum1= 0; 
    int sum2 = 0; 
    i = 0; 
    while (i < 7) { 
        if (i % 2 == 0) { 
            sum1 += nums[i];
        } else { 
            sum2 += nums[i];
        }
        i++; 
    }
    cout << sum1 << " " << sum2 << endl; 
}
