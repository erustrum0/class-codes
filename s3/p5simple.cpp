// Determines if a char is a vowel, consonant or number.
// This is a simplified version of the original program I wrote.

#include <iostream>
#include <algorithm>
#include <iterator>

// Array of characters to compare with (any non-vowel is considered a consonant)
char vowel_arr[5] = {'a', 'e', 'i', 'o', 'u'};

using namespace std;

int main() {
    // Get character
    char c;
    cout << "Enter a letter: ";
    cin >> c;
    // So that we can detect uppercase characters too.
    c = tolower(c);

    char* result;
    result = std::find(std::begin(vowel_arr), std::end(vowel_arr), c);

    if (result != std::end(vowel_arr)) {
        std::cout << "The character entered is a vowel." << std::endl;
        return 0;
    } else {
        std::cout << "The character entered is a consonant." << std::endl;
        return 0;
    }
}