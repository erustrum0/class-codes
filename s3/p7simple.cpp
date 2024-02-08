// Print month from a number.
// This version uses a switch case instead of a map.

#include <iostream>

int main() {
    int number;

    std::cout << "Input the number of a month (1-12): ";
    std::cin >> number;

    // This variable will change if the month is found.
    std::string monthname = "";

    // Switch because if-else if-else chains suck (subjective opinion).
    switch(number) {
        case 1:
            monthname = "January";
            break;
        case 2:
            monthname = "February";
            break;
        case 3:
            monthname = "March";
            break;
        case 4:
            monthname = "April";
            break;
        case 5:
            monthname = "May";
            break;
        case 6:
            monthname = "June";
            break;
        case 7:
            monthname = "July";
            break;
        case 8:
            monthname = "August";
            break;
        case 9:
            monthname = "September";
            break;
        case 10:
            monthname = "October";
            break;
        case 11:
            monthname = "November";
            break;
        case 12:
            monthname = "December";
            break;
        default:
            monthname = "";
            break;
    }

    if (monthname == "") {
        std::cout << "Couldn't find that month!" << std::endl;
        return -1;
    }

    std::cout << "That month is " << monthname << "." << std::endl;
    return 0;
}