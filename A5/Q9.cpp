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

void rotateRing(int mat[][100], int r1, int c1, int r2, int c2, int k) {
    if (r1 >= r2 || c1 >= c2) return;

    int len = 2 * (r2 - r1 + c2 - c1);
    int effective_k = k % len;
    if (effective_k == 0) return;

    int ring[400];
    int idx = 0;

    for (int j = c1; j <= c2; j++) ring[idx++] = mat[r1][j];
    for (int i = r1 + 1; i <= r2; i++) ring[idx++] = mat[i][c2];
    for (int j = c2 - 1; j >= c1; j--) ring[idx++] = mat[r2][j];
    for (int i = r2 - 1; i > r1; i--) ring[idx++] = mat[i][c1];

    int rotated[400];
    for (int i = 0; i < len; i++) {
        rotated[(i + effective_k) % len] = ring[i];
    }

    idx = 0;
    for (int j = c1; j <= c2; j++) mat[r1][j] = rotated[idx++];
    for (int i = r1 + 1; i <= r2; i++) mat[i][c2] = rotated[idx++];
    for (int j = c2 - 1; j >= c1; j--) mat[r2][j] = rotated[idx++];
    for (int i = r2 - 1; i > r1; i--) mat[i][c1] = rotated[idx++];
}

void rotateMatrixRings(int mat[][100], int n, int m, int k) {
    int r1 = 0, c1 = 0;
    int r2 = n - 1, c2 = m - 1;

    while (r1 < r2 && c1 < c2) {
        rotateRing(mat, r1, c1, r2, c2, k);
        r1++;
        c1++;
        r2--;
        c2--;
    }
}

int main() {
    int n = 4, m = 4;
    int mat[100][100] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "Input :" << endl;
    display(mat, n, m);
    cout << endl;

    int k = 1;
    rotateMatrixRings(mat, n, m, k);

    cout << "Output (K = " << k << "):" << endl;
    display(mat, n, m);

    return 0;
}
