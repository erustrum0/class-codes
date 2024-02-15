#include <iostream>

bool is_leap_year(int year) {
    if (year % 400 == 0) {
        return true;
    } else if (year % 100 == 0) {
        return false;
    } else if (year % 4 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    if (is_leap_year(year)) {
        std::cout << "That year is a leap year." << std::endl;
    } else {
        std::cout << "That year is not a leap year." << std::endl;
    }

    return 0;
}
