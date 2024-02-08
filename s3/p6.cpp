// Determine polarity of a number.

#include <iostream>

int main() {
    int number;

    std::cout << "Please input a number: ";
    std::cin >> number;

    // This is pretty messy, honestly. Whatever.
    if (number == 0) {std::cout << "The number is equal to zero.";}
    else if (number > 0) {std::cout << "The number is positive.";}
    else {std::cout << "The number is negative.";}
    std::cout << "\n"; // This is just for looking nice.

    return 0;
}