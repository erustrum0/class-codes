// Determines the largest among three numbers.

#include <iostream>

int main() {
    int a;
    int b;
    int c;
    int largest;

    std::cout << "Please input three numbers:\nA: ";
    std::cin >> a;
    std::cout << "B: ";
    std::cin >> b;
    std::cout << "C: ";
    std::cin >> c;

    // We now have all the numbers. Time to sort!
    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    std::cout << "\nThe largest is " << largest << ".\n";
    return 0;
}