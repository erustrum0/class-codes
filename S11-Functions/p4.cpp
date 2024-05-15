#include<iostream>
using namespace std; 

void sayHi(string name) { 
    cout << "Hi " << name << "!\n";
}

int main() { 
    string n; 
    do { 
        cin >> n; 
        if (n == "end") { 
            break; 
        }
        sayHi(n); 
    } while(true);

}