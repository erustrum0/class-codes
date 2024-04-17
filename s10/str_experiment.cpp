#include <iostream>
#include <string>

int main() {
    std::string input = "yazabrrbax";

    std::cout << "String length is " << input.length() << std::endl;     // Length is 9

    // Loop through the characters of the string
    for (size_t i = 0; i < input.size(); i++) {
        std::cout << input[i];
    }

    std::cout << "\n";

    for (size_t i = input.size(); i > 0; i--) {
        std::cout << input[i-1];
    }
    std::cout << std::endl;

}