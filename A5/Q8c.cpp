#include <iostream>
using namespace std;

void display(int mat[], int n);
bool isMagicSquare(int board[], int n);

void display(int mat[], int n) {
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < n; i++) {
            cout << mat[i + n * j] << " \t";
        }
        cout << "\n";
    }
}

bool isMagicSquare(int board[], int n) {
    bool isValid = true;
    int sum = 0;
    int test = 0;
    
    for(int i = 0; i < n; i++) {
        sum += board[i];
    }

    for(int j = 0; j < n && isValid; j++) {
        for(int i = 0; i < n; i++) {
            test += board[i + j * n];
        }
        if(sum != test) isValid = false;
        test = 0;
    }

    for(int i = 0; i < n && isValid; i++) {
        for(int j = 0; j < n; j++) {
            test += board[i + j * n];
        }
        if(sum != test) isValid = false;
        test = 0;
    }

    for(int i = 0; i < n && isValid; i++) {
        test += board[i + i * n];
    }
    if(sum != test) isValid = false;
    test = 0;

    for(int i = 0; i < n && isValid; i++) {
        test += board[n - i - 1 + i * n];
    }
    if(sum != test) isValid = false;
    test = 0;

    return isValid;
}

int main() {
    int board[9] = {
        2, 7, 6,
        9, 5, 1,
        4, 3, 8
    };

    display(board, 3);
    cout << isMagicSquare(board, 3);

    return 0;
}
