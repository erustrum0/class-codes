#include<iostream> 
#include<fstream> 
using namespace std; 

void readArray(char arr[3][3], string fn) { 
    ifstream f(fn);
    for(int i = 0; i < 3; i++) { 
        for(int j = 0; j < 3; j++) { 
            f >> arr[i][j];
        }
    }
}

int main() { 
    char a[3][3];
    readArray(a, "tic-tac-toe.txt");
    int x = 0, o = 0;
    bool ended = true; 
    for(int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
            if (a[i][j] == 'X') { 
                x++; 
            } else if (a[i][j] == 'O') { 
                o++; 
            } else { 
                ended = false; 
            }
        }
    }
    char turn = (x > o) ? 'O' : 'X';
    cout << "Turn: " << turn << endl; 
    cout << "Ended: " << ended << endl; 
}