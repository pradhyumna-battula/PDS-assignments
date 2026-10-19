#include <iostream>
using namespace std;

void display(int mat[], int n);
bool isLatinSquare(int board[], int n);

void display(int mat[], int n) {
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < n; i++) {
            cout << mat[i + n * j] << " \t";
        }
        cout << "\n";
    }
}

bool isLatinSquare(int board[], int n) {
    bool isValid = true;
    for(int i = 0; i < n && isValid; i++) {
        for(int j = 0; j < n && isValid; j++) {
            if(board[i + n * j] != 0) {
                for(int k = 0; k < n && isValid; k ++) {
                    if(k != i && board[k + n * j] == board[i + n * j]) isValid = false;
                    if(k != j && board[i + n * k] == board[i + n * j]) isValid = false;
                }                
            }  
        }
    }
    return isValid;
}

int main() {
    int board[9] = {
        1, 2, 3,
        3, 1, 2,
        2, 3, 1
    };

    display(board, 3);
    cout << isLatinSquare(board, 3);

    return 0;
}
