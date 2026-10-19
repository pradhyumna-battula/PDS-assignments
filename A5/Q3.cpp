#include <iostream>
using namespace std;

void transpose(int mat[], int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(i >= j) {
				int temp = mat[i + j * n];
				mat[i + j * n] = mat[j + i * n];
				mat[j + i * n] = temp;
			}
		}
	}
}

void reverse(int mat[], int n) {
	for(int j = 0; j < n; j++) {
		for(int i = 0; i < (n + 1) / 2; i ++) {
			int temp = mat[i + j * n];
			mat[i + j * n] = mat[n - i - 1 + j * n];
			mat[n - i - 1 + j * n] = temp;
		}
	}
}

void display(int mat[], int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << mat[j + i * n] << " \t";
		}
		cout << endl;
	}
}

void rotate(int mat[], int n) {
	transpose(mat,n);
	reverse(mat,n);
}

int main() {
	int mat[] = {1,2,3,4,5,6,7,8,9};
	display(mat,3);
	cout << endl;
	rotate(mat,3);
	display(mat,3);

    return 0;
}
