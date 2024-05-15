#include<iostream> 
using namespace std;

int main() { 
    srand((unsigned)time(0)); // generate a seed for random number
    int targetNumber = (rand() % 100)+1;
    cout << targetNumber << endl; 
    int guess = -1;
    while(guess != targetNumber) { 
        cout << "What is your guess? "; 
        cin >> guess; 
        if (guess > targetNumber) { 
            cout << "Go lower!" << endl; 
        } else if (guess < targetNumber) { 
            cout << "Go higher!" << endl;
        } else { 
            cout << "You found it!\n"; 
            break; 
        }
    }
}