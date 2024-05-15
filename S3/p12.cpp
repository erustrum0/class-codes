// Develop a program that prints the cost of a menu item based on user selection 
// (Menu has 5 choices -- items 1 to 5 -- with prices 10, 20, 30, 25, 39).
#include<iostream>
using namespace std; 
int main() { 
    cout << "Here is the menu: " << endl;
    cout << "Price of item 1 is $10" << endl;
    cout << "Price of item 2 is $20" << endl;
    cout << "Price of item 3 is $30" << endl;
    cout << "Price of item 4 is $25" << endl;
    cout << "Price of item 5 is $39" << endl;
    cout << "Which item would you like to purchase? "; 
    int item; 
    cin >> item; 
    if (item == 1) { 
        cout << "You need to pay $10"; 
    } else if (item == 2) { 
        cout << "You need to pay $20"; 
    } else if (item == 3) { 
        cout << "You need to pay $30"; 
    } else if (item == 4) { 
        cout << "You need to pay $25"; 
    } else if (item == 5) { 
        cout << "You need to pay $39";
    } else { 
        cout << "Wrong item # entered!";
    }
    cout << endl; 
}