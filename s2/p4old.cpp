#include <iostream>
using namespace std;

int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;
    int ascii_value = int(character);
    cout << "That character's ASCII value is " << ascii_value << ", right?\n";
}