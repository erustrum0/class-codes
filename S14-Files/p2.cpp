#include<fstream> 
#include<iostream> 
using namespace std; 

int main() { 
    ofstream f("output.txt");
    string s; 
    do { 
        getline(cin, s);
        f << s << endl; 
    } while(s!= "");
    f.close(); 
}