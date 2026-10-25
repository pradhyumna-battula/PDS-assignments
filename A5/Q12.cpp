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

void setZeros(int mat[][100], int n, int m) {
    bool firstRowZero = false;
    bool firstColZero = false;

    for(int j = 0; j < m; j++) {
        if(mat[0][j] == 0) {
            firstRowZero = true;
            break;
        }
    }

    for(int i = 0; i < n; i++) {
        if(mat[i][0] == 0) {
            firstColZero = true;
            break;
        }
    }

    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            if(mat[i][j] == 0) {
                mat[i][0] = 0;
                mat[0][j] = 0;
            }
        }
    }

    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            if(mat[i][0] == 0 || mat[0][j] == 0) {
                mat[i][j] = 0;
            }
        }
    }

    if(firstRowZero) {
        for(int j = 0; j < m; j++) {
            mat[0][j] = 0;
        }
    }

    if(firstColZero) {
        for(int i = 0; i < n; i++) {
            mat[i][0] = 0;
        }
    }
}

void staircaseSearch(int mat[][100], int n, int m, int key) {
    int i = 0;
    int j = m - 1;

    while(i < n && j >= 0) {
        if(mat[i][j] == key) {
            cout << "Key = " << key << " -> Found at (" << i << "," << j << ")" << endl;
            return;
        } else if(mat[i][j] > key) {
            j--;
        } else {
            i++;
        }
    }
    cout << "Key = " << key << " -> Not found" << endl;
}

int main() {
    int mat1[100][100] = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 0}
    };
    int n1 = 3, m1 = 3;

    cout << "Test Case 1 (zeroing):" << endl;
    cout << "Input :" << endl;
    display(mat1, n1, m1);
    
    setZeros(mat1, n1, m1);
    
    cout << "Output:" << endl;
    display(mat1, n1, m1);
    cout << endl;

    int mat2[100][100] = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };
    int n2 = 4, m2 = 4;

    cout << "Test Case 2 (search):" << endl;
    cout << "Matrix:" << endl;
    display(mat2, n2, m2);
    cout << endl;

    staircaseSearch(mat2, n2, m2, 9);
    staircaseSearch(mat2, n2, m2, 15);

    return 0;
}
