#include <iostream>
using namespace std;

void display(int mat[][100], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << mat[i][j] << " \t";
        }
        cout << "\n";
    }
}

void zigZagTraversal(int mat[][100], int n, int m) {
    cout << "Zig-zag: ";
    int total_diagonals = n + m - 1;
    
    for(int s = 0; s < total_diagonals; s++) {
        if(s % 2 != 0) {
            // Going down-left
            int r = (s < m) ? 0 : s - m + 1;
            int c = (s < m) ? s : m - 1;
            
            while(r < n && c >= 0) {
                cout << mat[r][c] << " ";
                r++;
                c--;
            }
        } else {
            int r = (s < n) ? s : n - 1;
            int c = (s < n) ? 0 : s - n + 1;
            
            while(r >= 0 && c < m) {
                cout << mat[r][c] << " ";
                r--;
                c++;
            }
        }
    }
    cout << endl;
}

void antiDiagonalSums(int mat[][100], int n, int m) {
    int total_diagonals = n + m - 1;
    int sums[200] = {0};
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            sums[i + j] += mat[i][j];
        }
    }
    
    cout << "Sums   : ";
    for(int s = 0; s < total_diagonals; s++) {
        cout << sums[s] << " ";
    }
    cout << endl;
}

int main() {
    int n = 3, m = 4;
    int mat[100][100] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    cout << "Input :" << endl;
    display(mat, n, m);
    cout << endl;
    
    zigZagTraversal(mat, n, m);
    antiDiagonalSums(mat, n, m);

    return 0;
}
