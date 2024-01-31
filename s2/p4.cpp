#include <iostream>
using namespace std;

int main() {
    //b = round(a /100*9 + a, 2) - Formula for tax
    double startnum;
    cout << "Enter a price: ";
    cin >> startnum;
    double taxnum = startnum/100*9 + startnum;
    cout << "The final price, after tax would be " << taxnum << ".\n";
}