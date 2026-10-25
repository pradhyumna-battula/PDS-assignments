#include <iostream>
#include <cmath>
using namespace std;

int lower_index(int i, int j, int n) {
    if (i < 0 || j < 0 || i >= n || j >= n || i < j) return -1;
    return (i * (i + 1)) / 2 + j;
}

int lower_get(int mat[], int i, int j, int n) {
    int idx = lower_index(i, j, n);
    if (idx == -1) return 0;
    return mat[idx];
}

bool lower_set(int mat[], int i, int j, int n, int value) {
    int idx = lower_index(i, j, n);
    if (idx == -1) {
        if (value != 0) return false;
        return true;
    }
    mat[idx] = value;
    return true;
}

void multiply_lower_triangular(int A[], int B[], int C[], int n) {
    int size = (n * (n + 1)) / 2;
    for (int i = 0; i < size; i++) {
        C[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            int sum = 0;
            for (int k = j; k <= i; k++) {
                sum += lower_get(A, i, k, n) * lower_get(B, k, j, n);
            }
            C[lower_index(i, j, n)] = sum;
        }
    }
}


int tridiag_index(int i, int j, int n) {
    if (i < 0 || j < 0 || i >= n || j >= n || abs(i - j) > 1) return -1;
    return (i == 0) ? j : 2 * i + j;
}

int tridiag_get(int mat[], int i, int j, int n) {
    int idx = tridiag_index(i, j, n);
    if (idx == -1) return 0;
    return mat[idx];
}

bool tridiag_set(int mat[], int i, int j, int n, int value) {
    int idx = tridiag_index(i, j, n);
    if (idx == -1) {
        if (value != 0) return false;
        return true;
    }
    mat[idx] = value;
    return true;
}


int main() {
    int n1 = 4;
    int lower_mat[100] = {0}; 
    int tridiag_mat[100] = {0};

    cout << "=== Test Case 1 (N = 4) ===" << endl;
    cout << "Lower triangular : size = " << (n1 * (n1 + 1)) / 2 
         << ", index of (2,1) = " << lower_index(2, 1, n1) 
         << ", index of (3,3) = " << lower_index(3, 3, n1) << endl;

    cout << "Tridiagonal      : size = " << (3 * n1 - 2) 
         << ", index of (2,3) = " << tridiag_index(2, 3, n1) 
         << ", get(3,1) = " << tridiag_get(tridiag_mat, 3, 1, n1) << endl << endl;


    int n2 = 2;
    int A[100] = {1, 2, 3};
    int B[100] = {4, 5, 6};
    int C[100] = {0};

    cout << "=== Test Case 2 (Multiplication, N = 2) ===" << endl;
    int a_size = (n2 * (n2 + 1)) / 2;

    cout << "A = [";
    for(int i = 0; i < a_size; i++) cout << A[i] << (i + 1 < a_size ? ", " : "");
    cout << "] (matrix 1 0 / 2 3)" << endl;

    cout << "B = [";
    for(int i = 0; i < a_size; i++) cout << B[i] << (i + 1 < a_size ? ", " : "");
    cout << "] (matrix 4 0 / 5 6)" << endl;

    multiply_lower_triangular(A, B, C, n2);

    cout << "A x B = [";
    for(int i = 0; i < a_size; i++) cout << C[i] << (i + 1 < a_size ? ", " : "");
    cout << "] (matrix 4 0 / 23 18)" << endl;

    return 0;
}
