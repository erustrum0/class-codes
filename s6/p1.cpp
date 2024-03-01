#include <iostream>

int main() {
    std::string name;
    std::cout << "Please enter your name: ";
    std::cin >> name;
    std::cout << std::endl << "Hello, " << name << "!" << std::endl;
}