// Determines if a char is a vowel, consonant or number.
// This one is a little fancy, but still does the trick just fine.

#include <iostream>
#include <algorithm>
#include <iterator>
#include "getch.h"
// getch.h is a custom library for char input (to make it look nice)
// Using getch() makes it possible to forgo pressing enter for instant feedback for the user.

// Here we have three arrays for three kinds of characters.
char vowel_arr[5] = {'a', 'e', 'i', 'o', 'u'};
char cons_arr[21] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
char num_arr[20] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

int main() {
    char c;
    cout << "Enter a character: " << flush;             // flush flushes the cout before getch runs (so that the text shows up).
    c = tolower(getch());                               // I made the mistake originally of using the bitwise >> for getch(), which does not work.
    cout << "\n\n" << flush;                            // Newlines for lookin' nice!

    // Now we must search for the char in our arrays. The result variable is a pointer, as denoted by the asterisk,
    char* result;

    result = find(begin(vowel_arr), end(vowel_arr), c);

    if (result != end(vowel_arr)) {
        cout << "The character entered is a vowel." << endl;
        return 0;
    }

    result = find(begin(cons_arr), end(cons_arr), c);
    if (result != end(cons_arr)) {
        cout << "The character entered is a consonant." << endl;
        return 0;
    }

    result = find(begin(num_arr), end(num_arr), c);
    if (result != end(num_arr)) {
        cout << "The character entered is a number." << endl;
        return 0;
    }

    if (c == '!') {
        // You've discovered an easter egg! This code induces a segfault just for giggles :P
        int* ptr = nullptr;                 // Creating a null pointer
        *ptr = 10;                          // Attempting to dereference the null pointer
        cout << "HAHA HAVE THIS SEGFAULT";  // This will never actually be seen.
        return 139;                         // Redundancy.
    }

    if (c == '?') {
        // This is a fake help screen, just for fun
        cout << "You've found the super secret help screen!\nThis program will tell apart letters, consonants and vowels (and in rare cases, the '!' or '?' character).\nOther characters will not work.\n\nHave a great day!\n";
        return 255; // Just for fun :D
    }

    cout << "Could not find your character." << endl;
    return -1; // Failure state, happens if you use special characters.
}