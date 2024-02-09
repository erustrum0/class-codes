// Checks if the user inputs the char 'a'

#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter a: ";
    cin >> c;

    if (c == 'a') {
        cout << "\nYay!\n";
        return 0;
    };
    cout << "\nThat wasn't the letter 'a'... You know what, have this segfa" << flush;
    int* ptr = nullptr; // null pointer to the rescue!
    *ptr = 10;
}