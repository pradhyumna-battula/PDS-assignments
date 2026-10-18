#include <iostream>
using namespace std;

void display(int mat[9][9]);
bool isValidSudoku(int board[9][9]);
bool isValidBox(int board[9][9], int i1, int j1);

bool isValidBox(int board[9][9], int i1, int j1) {
    int i0 = i1 - (i1 % 3), j0 = j1 - (j1 % 3);
    bool isValid = true;
    for(int i = 0; i < 3 && isValid; i++) {
        for(int j = 0; j < 3 && isValid; j++) {
            if((i + i0 != i1 || j + j0 != j1) && board[i + i0][j + j0] != 0 && board[i1][j1] == board[i + i0][j + j0] && board[i1][j1] != 0) {
                isValid = false;
            }
        }
    }
    return isValid;
}

void display(int mat[9][9]) {
    for(int j = 0; j < 9; j++) {
        for(int i = 0; i < 9; i++) {
            cout << mat[i][j] << " \t";
        }
        cout << "\n";
    }
}

bool isValidSudoku(int board[9][9]) {
    bool isValid = true;
    for(int i = 0; i < 9 && isValid; i++) {
        for(int j = 0; j < 9 && isValid; j++) {
            if(board[i][j] != 0) {
                for(int k = 0; k < 9 && isValid; k ++) {
                    if(k != i && board[k][j] == board[i][j]) isValid = false;
                    if(k != j && board[i][k] == board[i][j]) isValid = false;
                }
                
                if(!isValidBox(board, i, j)) isValid = false;
            }  
        }
    }
    return isValid;
}

int main() {
    int board[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    display(board);
    cout << isValidSudoku(board);

    return 0;
}
