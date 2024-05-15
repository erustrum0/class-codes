#include<iostream>
using namespace std; 
int main() { 
    int numOfStudents; 
    cin >> numOfStudents; 
    while (numOfStudents > 0) { 
        /// code to run for each student:
        cout << "Enter number of courses: ";
        int courseCount; 
        cin >> courseCount;
        int sumOfGrades = 0; 
        int counter = courseCount; 
        while (counter > 0)
        {
            int grade; 
            cin >> grade; 
            sumOfGrades += grade; 
            counter--;
        }
        cout << "GPA for this student is: " << sumOfGrades / courseCount << endl; 
        /// end of code for each student
        numOfStudents--; 
    }
}