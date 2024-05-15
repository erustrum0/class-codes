//First Rank: Create a program that receives a sentence from the user including a set of first names separated by space and prints out the name that would show up first in alphabetical order. You can assume no two names in the list share the same first character and also all names start with an uppercase character. Example: if the input is "John Lauren Samuel Nicholas Eva", the output should be "Eva". 
#include<iostream>
using namespace std; 
int main() { 
    string names; 
    getline(cin, names); 
    string firstNameInList = "";
    bool shouldWeRecordTheName = true;  
    bool spaceCharFound = false; 
    for(int i = 0; i < names.length(); i++) { 
        if (names[i] == ' ') {                  // next iteration a new name will start
            shouldWeRecordTheName = false; 
            spaceCharFound = true; 
        }
        if (spaceCharFound && names[i] != ' ') {//next name just started
            spaceCharFound = false;             //next name started so we turn this flag off so next iteration we don't assume that a new name started
            if (names[i] < firstNameInList[0]) { 
                firstNameInList = "";
                shouldWeRecordTheName = true; 
            }            
        }
        if(shouldWeRecordTheName) { 
            firstNameInList += names[i];
        }
    }
    cout << firstNameInList << endl; 
}
