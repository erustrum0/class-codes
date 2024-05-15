#include<iostream>
#include<fstream>
using namespace std; 

int wordCount(string s) { 
    int wordcount = 0;
    // let's simply assume that number of space characters would be number of wrods in the line
    for(int i = 1; i < s.length(); i++) { 
        // we don't want to count spaces next to each other and only count one of them when there are multiple space characters next to each other
        if (s[i] == ' ' && s[i-1] != ' ') { 
            wordcount += 1; 
        }
    }
    // +1 to count the last word assuming there is not space aftar that word
    return wordcount + 1;
}

int main() { 
    ifstream inputfile("source.txt");
    ofstream of("destination.txt");
    string s; 
    int linecount = 0; 
    int wordcount = 0; 
    int charcount = 0; 
    while(!inputfile.eof()) { 
        getline(inputfile, s);
        of << s << endl; 
        linecount++;
        wordcount += wordCount(s);
        charcount += s.length(); 
    }
    inputfile.close(); 
    of.close(); 
    cout << "lines: " << linecount << endl;
    cout << "words: " << wordcount << endl;
    cout << "chars: " << charcount << endl;
}