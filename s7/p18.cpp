#include <iostream>

int main() {
    bool isAscending = true;
    int prevNumber = 0;
    int curNumber;
    std::cout << "Please enter five numbers.\n";
    for (int i = 0; i <= 4; i++){
        std::cout << "\t" << i+1 << ": ";
        std::cin >> curNumber;
        if (curNumber < prevNumber) {
            isAscending = false;
        }
        curNumber = prevNumber;
    }
    if (isAscending) {
        std::cout << "That was a sequence of ascending numbers.\n";
    }
    return 0;
}