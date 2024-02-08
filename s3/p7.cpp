// Print month from a number

// Import libraries we will use here.
#include <iostream>
#include <map>
#include <string>

// Using this line just makes stuff 20% easier (80% if you forget and have to hunt down a missing 'std::')
using namespace std;

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
    map<int, string> months;
 
    // Populating the mapped array
    months[1] = "January";
    months[2] = "February";
    months[3] = "March";
    months[4] = "April";
    months[5] = "May";
    months[6] = "June";
    months[7] = "July";
    months[8] = "August";
    months[9] = "September";
    months[10] = "October";
    months[11] = "November";
    months[12] = "December";

    // Now that we have this array, we can get the user's input.
    string raw_input;
    cout << "Input the number of a month (1-12): ";
    cin >> raw_input;

    // Check if the input is a valid int.
    int input_month;
    if (is_number(raw_input)) {
        // stoi() turns a string into an int, which is useful here.
        input_month = stoi(raw_input);
    } else {
        // Exit in defeat if the user typed something that isn't a number.
        std::cout << "That's not a number. Try using a number from 1 to 12.\n";
        return -1;
    }


    // With that done, we make an iterator...
    map<int, string>::iterator it = months.begin();
    // Then, we iterate through each entry...
    while (it != months.end()) {
        // Check if the month is the same as this current item.
        if (it->first == input_month) {
            // Looks like the month was found! Now, we output the corresponding month name.
            cout << "That month is " << it->second << ".\n";
            return 0;
        }
        ++it;
    }

    // If we can't find the month, we exit the loop in defeat.
    cout << "Could not find that month.\n";
    return -1;
}