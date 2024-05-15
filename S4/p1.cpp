//Ask the user to input their exam score (out of 100). Classify the grade 
// as 'A' if the score is 90 or above, 'B' if it's between 80 and 89, 
// 'C' if it's between 70 and 79, and 'D' if it's below 70.
#include<iostream>
using namespace std; 
int main() { 
    float grade; 
    cout << "What is the numerical grade between 0 and 100?";
    cin >> grade;
    if (grade > 100) { 
        cout << "Out of range grade!"; 
    } else if (grade >= 90) { 
        cout << "Letter grade is A"; 
    } else if (grade >= 80) { 
        cout << "Letter grade is B"; 
    } else if (grade >= 70) { 
        cout << "Letter grade is C"; 
    } else if (grade >= 0) { 
        cout << "Letter grade is D"; 
    } else { 
        cout << "Out of range grade!";
    }
    cout << endl; 
}

