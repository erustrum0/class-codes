#include <iostream>
using namespace std;

int main() {
    //z = y*x - Formula for area
    double len;
    double wid;
    cout << "Enter a length (inches): ";
    cin >> len;
    cout << "Enter a width (inches): ";
    cin >> wid;
    double area = len*wid;
    cout << "The area of the described shape is " << area << " cubic inches.\n";
}