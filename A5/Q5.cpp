#include <iostream>
using namespace std;

void display(int mat[][100], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << mat[i][j] << " \t";
        }
        cout << "\n";
    }
}

void swapRows(int mat[][100], int r1, int r2, int n) {
    for(int j = 0; j < n; j++) {
        int temp = mat[r1][j];
        mat[r1][j] = mat[r2][j];
        mat[r2][j] = temp;
    }
}

long long findDeterminant(int input_mat[][100], int n) {    int mat[100][100];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            mat[i][j] = input_mat[i][j];
        }
    }

    int sign = 1;
    int prev_pivot = 1;

    cout << "Initial Matrix:" << endl;
    display(mat, n);
    cout << "-------------------------" << endl;

    for(int i = 0; i < n - 1; i++) {
        if(mat[i][i] == 0) {
            int swap_row = -1;
            for(int r = i + 1; r < n; r++) {
                if(mat[r][i] != 0) {
                    swap_row = r;
                    break;
                }
            }
            
            if(swap_row == -1) {
                return 0;
            }
            
            swapRows(mat, i, swap_row, n);
            sign = -sign; 
            
            cout << "Swapped row " << i << " with row " << swap_row << ":" << endl;
            display(mat, n);
            cout << "-------------------------" << endl;
        }

        for(int j = i + 1; j < n; j++) {
            for(int k = i + 1; k < n; k++) {
                long long val = (long long)mat[j][k] * mat[i][i] - (long long)mat[j][i] * mat[i][k];
                mat[j][k] = val / prev_pivot;
            }
        }
        prev_pivot = mat[i][i];

        cout << "Matrix after elimination step " << i + 1 << ":" << endl;
        display(mat, n);
        cout << "-------------------------" << endl;
    }

    return (long long)sign * mat[n - 1][n - 1];
}

int main() {
    // Test Case 1[cite: 3]
    int mat1[100][100] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 10}
    };

    cout << "=== Test Case 1 ===" << endl;
    long long det1 = findDeterminant(mat1, 3);
    cout << "Output: Determinant = " << det1 << ".00" << endl << endl;

    int mat2[100][100] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "=== Test Case 2 (singular matrix) ===" << endl;
    long long det2 = findDeterminant(mat2, 3);
    cout << "Output: Determinant = " << det2 << ".00";
    if(det2 == 0) {
        cout << " (matrix is singular)";
    }
    cout << endl;

    return 0;
}
