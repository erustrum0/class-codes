#include<iostream> 
#include<fstream>
using namespace std; 

int main() { 
    ifstream f1("input.txt");
    string s; 
    while (!f1.eof()) { 
        getline(f1, s); 
        cout << s << endl; 
    }
    f1.close(); 
}