// Develop a program that uses a for loop to keep asking the 
// user for a password until they enter the correct one.
#include<iostream> 
using namespace std; 
int main() { 
    string pass = "saddleback!";
    string s = ""; 

    for(;s != pass;) { //i is not used in the loop so we can remove the variable
        cin >> s; 
        if (s == pass) { 
            cout << "Password is correct\n"; 
        } else { 
            cout << "Password is NOT correct\n"; 
        }
    }

    // Alternavie solution
    // for(;;) { //i is not used in the loop so we can remove the variable
    //     cin >> s; 
    //     if (s == pass) { 
    //         cout << "Password is correct\n"; 
    //         break; // breaks out of the loop
    //     } else { 
    //         cout << "Password is NOT correct\n"; 
    //     }
    // }

    // Alternative solution 
    // for(int i = 0;i != -1; i++) { //i is not used in the loop so we can remove the variable
    //     cin >> s; 
    //     if (s == pass) { 
    //         cout << "Password is correct\n"; 
    //         break; // breaks out of the loop
    //     } else { 
    //         cout << "Password is NOT correct\n"; 
    //     }
    // }
}
