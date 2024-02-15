#include <iostream>
int main() {
    int month;
    std::cout << "Enter a month number from 1-12: ";
    std::cin >> month;

    int days;
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            days = 28;
            break;
        default:
            std::cout << "Didn't recognize that month.";
    }

    std::cout << "That month has " << days << " days." << std::endl;

    return 0;
}