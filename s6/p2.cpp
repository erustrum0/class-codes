#include <iostream>

int main() {
    std::string strA;
    std::string strB;

    std::cout << "Please enter string A: ";
    std::cin >> strA;
    std::cout << "Please enter string B: ";
    std::cin >> strB;

    //concat with + operator
    std::string concat = strA + strB;
    std::cout << "The concatonation of these strings is:\n" << concat << std::endl;
}