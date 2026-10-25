#include <iostream>
using namespace std;

void display(int mat[][100], int n);
bool isLatinSquare(int board[][100], int n);

void display(int mat[][100], int n) {
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < n; i++) {
            cout << mat[j][i] << " \t";
        }
        cout << "\n";
    }
}

bool isLatinSquare(int board[][100], int n) {
    bool isValid = true;
    for(int i = 0; i < n && isValid; i++) {
        for(int j = 0; j < n && isValid; j++) {
            if(board[j][i] != 0) {
                for(int k = 0; k < n && isValid; k++) {
                    if(k != i && board[j][k] == board[j][i]) isValid = false;
                    if(k != j && board[k][i] == board[j][i]) isValid = false;
                }                
            }   
        }
    }
    return isValid;
}

int main() {
    int board[100][100] = {
        {1, 2, 3},
        {3, 1, 2},
        {2, 3, 1}
    };

    display(board, 3);
    cout << isLatinSquare(board, 3);

    return 0;
}
