// slash slash like // is used for comment. When we have // at the beggining of a line
// we tell the c++ compiler that this line is not a command to run. this line is just
// a comment line. 

// we always have the following line and it is a library that we use:
#include<iostream> 
// the follwoing line says we are going to use the std namespace:
using namespace std; 

// the following line is where the program starts. 
int main() { // sample comment to show it can be written anywhere. 
    // "cout" is the command by which we ask c++ to print out some text or number on the screen
    cout << "Hello C++ Programming"; 
}
/* 
is used for multi-line comments 

to run the program we type g++ [filename] in terminal
if you see an error like: No such file or directory
it says the file cannot be found. either the filename is wrong or your are in the
worng folder. if we need to go into a folder we type cd [folder name]
if we need to go one folder up out of the current folder we type cd ..
if we type ls in terminal we see list of files in the current folder. 
if g++ [filename] command runs successfully, we see no error and a new file
called a.out is going to be created which is the executable version of 
our program translated by c++ compiler. 
now we are going to run our program. by typing ./a.out in terminal.
*/