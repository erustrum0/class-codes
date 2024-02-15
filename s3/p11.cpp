// Name the polygon based on number of sides.

// Import libraries we will use here.
#include <iostream>
#include <map>
#include <string>

// This is for detecting whether the input is a string or an int (so we can catch cases where the user inputs a month name).
bool is_number(const std::string& s)
{
    // We iterate through the string
    std::string::const_iterator it = s.begin();
    // std::isdigit() acts like a tripwire here. If we find a non-digit, we exit with a false bool
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

// Now for the main attraction!
int main()
{
    std::map<int, std::string> polygons;
 
    // Populating the mapped array
    // "That's called a" << output << "." is the syntax i'm working off
    polygons[0] = " point, you absolute goofball";
    polygons[1] = " monogon. Please come back to euclidean reality";
    polygons[2] = " digon. Please come back to euclidean reality";
    polygons[3] = " triangle";
    polygons[4] = " rectangle";
    polygons[5] = " pentagon";
    polygons[6] = " hexagon";
    polygons[7] = " heptagon";
    polygons[8] = "n octagon";
    polygons[9] = " nonagon";
    polygons[10] = " decagon";
    polygons[11] = "n undecagon";
    polygons[12] = " dodecagon";
    polygons[13] = " tridecagon";
    polygons[14] = " tetradecagon";
    polygons[15] = " pentadecagon";
    polygons[16] = " hexadecagon";
    polygons[17] = " heptadecagon";
    polygons[18] = "n octadecagon";
    polygons[19] = "n enneadecagon";
    polygons[20] = "n icosagon";

    // Now that we have this array, we can get the user's input.
    std::string raw_input;
    std::cout << "How many sides does this polygon have?: ";
    std::cin >> raw_input;

    // Check if the input is a valid int.
    int input;
    if (is_number(raw_input)) {
        // stoi() turns a string into an int, which is useful here.
        input = std::stoi(raw_input);
    } else {
        // Exit in defeat if the user typed something that isn't a number.
        std::cout << "That's not a number. Try using a number (negative numbers don't count as numbers here, sorry).\n";
        return -1;
    }


    // With that done, we make an iterator...
    std::map<int, std::string>::iterator it = polygons.begin();
    // Then, we iterate through each entry...
    while (it != polygons.end()) {
        // Check if the polygon id is the same as this current item.
        if (it->first == input) {
            // Looks like the shape was found! Now, we output the corresponding name.
            std::cout << "That is called a" << it->second << ".\n";
            return 0;
        }
        ++it;
    }

    // If we can't find the polygon, we exit the loop in defeat.
    if (input >= -1){
        std::cout << "That's too large, try a number up to 20." << std::endl;
    }

    // If not larger than zero, it's a negative number.
    // You can't type negative numbers anyways.
    std::cout << "Negative polygons aren't counted, sorry!" << std::endl;
    return -1;
}