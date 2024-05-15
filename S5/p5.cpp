//Develop a program that prints the cost of a menu item based on user
// selection (Menu has 5 choices -- items 1 to 5 -- with prices 10, 20, 30, 25, 39).


#include<iostream>
using namespace std; 
int main() { 
    cout << "We offer 5 different items. Enter your choice (1-5) to see the price:"; 
    int choice;
    cin >> choice; 
    int price;
    switch (choice) { 
        case 1: price = 10; break; 
        case 2: price = 20; break; 
        case 3: price = 30; break; 
        case 4: price = 25; break; 
        case 5: price = 39; break; 
        //default:price = -1; break; 
    }
    if (choice > 5 || choice < 1) { 
        cout << "Item number is not valid!" << endl; 
    } else { 
        cout << "Pirce is " << price << endl; 
    }
}