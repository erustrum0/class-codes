#include<iostream>
using namespace std; 

void printBoard(char a[3][3]) { 
    cout << "Current Board:\n";
    cout << "  0 1 2\n";
    for(int i = 0; i < 3; i++) { 
        cout << i << " ";
        for (int j = 0; j < 3; j++) { 
            cout << a[i][j] << " ";
        }
        cout << endl; 
    }
}

void moveForUser(char p, char b[3][3]) {
    while (true) { 
        cout << "Player " << p << " ,Enter the position(x and y): ";
        int x, y; 
        cin >> x >> y; 
        if (x < 3 && x >=0 && y >= 0 && y < 3 && b[x][y] == '_') { 
            b[x][y] = p; 
            break; 
        } else { 
            cout << "Worng coordinates. Try again!";
        }
    }
}

bool checkWin(char b[3][3]) {
    for(int r = 0; r < 3; r++) { 
        if (b[r][0] == b[r][1] && b[r][0] == b[r][2] && b[r][0] != '_') { 
            cout << b[r][0] << " won the game!\n";
            return true; 
        }
    }

    for(int c = 0; c < 3; c++) { 
        if (b[0][c] == b[1][c] && b[0][c] == b[2][c] && b[0][c] != '_') { 
            cout << b[0][c] << " won the game!\n";
            return true; 
        }
    }

    if (b[0][0] == b[1][1] && b[0][0] == b[2][2] && b[0][0] != '_') { 
        cout << b[0][0] << " won the game!\n";
        return true; 
    }

    if (b[0][2] == b[1][1] && b[0][2] == b[2][0] && b[0][2] != '_') { 
        cout << b[0][2] << " won the game!\n";
        return true; 
    }

    return false; 
}

int main() { 
    char board[3][3] = { 
        {'_', '_', '_'}, 
        {'_', '_', '_'}, 
        {'_', '_', '_'}
    };

    printBoard(board);
    char piece = 'O';
    while (true) {
        moveForUser(piece, board);
        printBoard(board);
        if (checkWin(board)) { 
            break; 
        }
        piece = (piece == 'O') ? 'X' : 'O';
    }
}