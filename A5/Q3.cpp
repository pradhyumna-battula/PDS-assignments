#include <iostream>
using namespace std;

void transpose(int mat[][100], int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(i >= j) {
				int temp = mat[i][j];
				mat[i][j] = mat[j][i];
				mat[j][i] = temp;
			}
		}
	}
}

void reverse(int mat[][100], int n) {
	for(int j = 0; j < n; j++) {
		for(int i = 0; i < (n + 1) / 2; i++) {
			int temp = mat[j][i];
			mat[j][i] = mat[j][n - i - 1];
			mat[j][n - i - 1] = temp;
		}
	}
}

void display(int mat[][100], int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << mat[i][j] << " \t";
		}
		cout << endl;
	}
}

void rotate(int mat[][100], int n) {
	transpose(mat, n);
	reverse(mat, n);
}

int main() {
	int mat[100][100] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	
	display(mat, 3);
	cout << endl;
	rotate(mat, 3);
	display(mat, 3);

    return 0;
}
