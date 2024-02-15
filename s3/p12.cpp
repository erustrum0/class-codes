#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>

// For iterating through MenuItems in the menu vector later on
int req_id = 0;

// MenuItem struct
struct MenuItem {
    int ID;
    int price;
    std::string name;
    std::string description;
    bool hasFish;
    bool isVegetarian;
    bool hasSesame;
};

// Thanks to an anonymous individual for this code snippet
bool isNumber(const std::string& s) {
    return !s.empty() && std::all_of(s.begin(), s.end(), [](unsigned char c) { return std::isdigit(c); });
}

// This function outputs details about whatever menu item you give it
void outputMenuItemDetails(const MenuItem& item) {
    std::cout << "Item ID: " << item.ID << "\n";
    std::cout << "Price: $" << item.price << "\n";
    std::cout << "Name: " << item.name << "\n";
    std::cout << "Description: " << item.description << "\n";
    std::cout << "Contains Fish? " << (item.hasFish ? "Yes" : "No") << "\n";
    std::cout << "Is Vegetarian? " << (item.isVegetarian ? "Yes" : "No") << "\n";
    std::cout << "Contains Sesame? " << (item.hasSesame ? "Yes" : "No") << "\n\n";
}

// This interprets user input for the mainloop.
int getUserInput() {
    std::string userInput;
    std::cout << ": ";
    std::cin >> userInput;
    std::cout << std::endl;
    if (userInput == "exit") {
        return 0;
    }
    else if (userInput == "help") {
        return 1;
    }
    else if (userInput == "list") {
        return 2;
    }
    // If input is a number, grab the menu listing for that ID.
    else if (isNumber(userInput)){
        req_id = std::stoi(userInput);
        return 3;
    }
    return -1;
}

// A little function to allow me to split the CSV file by delimiter (;)
// This is useful for other things so I'm just gonna leave the delimiter as an arg instead of setting it to ';'.
std::vector<std::string> split(const std::string& str, char delimiter) {
    // Use tokens as a vector so we can parse it
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenstream(str);
    while (std::getline(tokenstream, token, delimiter)) {
        tokens.push_back(token);
    }
    // Return the parsed list of tokens
    return tokens;
}

int main() {
    // Open menu.csv for reading
    std::ifstream file("menu.csv");
    // Set up the vector to store MenuItems. Better than using an array because vectors are dynamically sized.
    std::vector<MenuItem> menu;
    int id = 1; // Initial value, this will iterate

    if (file.is_open()) {
        // Iterate over lines
        std::string currentline;
        while (std::getline(file, currentline)) {
            // Basically a wordy version of python's "".split(';') function
            // The ';' here is called a delimiter
            std::vector<std::string> tokens = split(currentline, ';');
            // Only run this if the number of tokens in the line equals four
            // Otherwise, it's not what we want
            if (tokens.size() == 4) {
                MenuItem item;
                // I love the ++ operator because you can iterate after getting a value
                // Only one line of code to iterate AND get a value! I love C++.
                item.ID = id++;
                // Get price (first token, stoi to turn string to int)
                item.price = std::stoi(tokens[0]);
                // Get name (second token)
                item.name = tokens[1];
                // etc, etc. You get the idea by now.
                item.description = tokens[2];
                // This one is special, it takes the number and interprets it as binary flags
                // I'm proud of this

                // The int flags stores the actual integer value. We can operate on this like a binary value.
                int flags = std::stoi(tokens[3]);

                // AND it with one to see if it has the first bit.
                item.hasFish = (flags & 1) != 0;
                // repeat with two to see if it has the second bit.
                item.isVegetarian = (flags & 2) != 0;
                // again, with four to see if it has the third bit.
                item.hasSesame = (flags & 4) != 0;

                // Finally, we can add this item object to the vector.
                menu.push_back(item);
            }
        }
        //file.close();
    } else {
        std::cerr << "You need menu.csv to be able to parse the menu info.\n";
        return -1;
    }

    // User input loop.
    while (true) {
        switch (getUserInput()) {
            case 0:
                std::cout << "Exiting program.\n\n\n";
                return 0;
            case 1:
                std::cout << "Commands you can use include the following:\nhelp\t| Get this help screen.\nexit\t| Exit program.\nlist\t| List all menu items.\n\nYou can also type any number to get information on that menu entry.\n\n";
                break;
            case 2:
                std::cout << "Here's the menu listing:\n\n";
                for (const auto& item : menu) {
                    std::cout << "Item ID: " << item.ID << "\t| $" << item.price << "\t| " << item.name << "\n";
                }
                std::cout << std::endl;
                break;
            case 3:
                std::cout << "Here's the item you requested:\n\n";

                for (const auto& item : menu) {
                    if (item.ID == req_id) {
                        outputMenuItemDetails(item);
                        break;
                    }
                }
                std::cout << std::endl;
                break;
            case -1:
                std::cout << "Couldn't recognize that command. Try 'help'.\n\n";
                break;
        }
    }

    return 0;
}
