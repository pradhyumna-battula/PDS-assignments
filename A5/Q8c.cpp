#include <iostream>
using namespace std;

void display(int mat[][100], int n);
bool isMagicSquare(int board[][100], int n);

void display(int mat[][100], int n) {
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < n; i++) {
            cout << mat[j][i] << " \t";
        }
        cout << "\n";
    }
}

bool isMagicSquare(int board[][100], int n) {
    bool isValid = true;
    int sum = 0;
    int test = 0;
    
    for(int i = 0; i < n; i++) {
        sum += board[0][i];
    }

    for(int j = 0; j < n && isValid; j++) {
        for(int i = 0; i < n; i++) {
            test += board[j][i];
        }
        if(sum != test) isValid = false;
        test = 0;
    }

    for(int i = 0; i < n && isValid; i++) {
        for(int j = 0; j < n; j++) {
            test += board[j][i];
        }
        if(sum != test) isValid = false;
        test = 0;
    }

    for(int i = 0; i < n && isValid; i++) {
        test += board[i][i];
    }
    if(sum != test) isValid = false;
    test = 0;

    for(int i = 0; i < n && isValid; i++) {
        test += board[i][n - i - 1];
    }
    if(sum != test) isValid = false;
    test = 0;

    return isValid;
}

int main() {
    int board[100][100] = {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3, 8}
    };

    display(board, 3);
    cout << isMagicSquare(board, 3);

    return 0;
}
