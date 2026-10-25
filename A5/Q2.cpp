#include <iostream>
using namespace std;

void display_mat(int mat[][100], int n, int m) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cout << mat[i][j] << " \t";
		}
		cout << endl;
	}
}

void cspiral_fill(int out[][100], int n, int m) {
	int a = 1;
	int dir = 0;
	int m1 = m, n1 = n - 1;
	int x = 0, y = 0;
	
	while(a <= m * n) {
		switch(dir % 4) {
			case 0:
				for(int i = x; i < m1 + x; i++) {
					out[y][i] = a++;
				}
				x += m1 - 1;
				y++;
				m1--;
				dir++;
				break;
			case 1:
				for(int i = y; i < n1 + y; i++) {
					out[i][x] = a++;
				}
				y += n1 - 1;
				x--;
				n1--;
				dir++;
				break;
			case 2:
				for(int i = x; i > x - m1; i--) {
					out[y][i] = a++;
				}
				x -= m1 - 1;
				y--;
				m1--;
				dir++;
				break;
			case 3:
				for(int i = y; i > y - n1; i--) {
					out[i][x] = a++;
				}
				y -= n1 - 1;
				x++;
				n1--;
				dir++;
				break;
		}
	}
}

void aspiral_read(int out[][100], int n, int m) {
	int a = 1;
	int dir = 2;
	int m1 = m, n1 = n - 1;
	int x = m - 1, y = n - 1;
	
	while(a <= m * n) {
		switch(dir % 4) {
			case 0:
				for(int i = x; i < m1 + x; i++) {
					cout << out[y][i] << " ";
					a++;
				}
				x += m1 - 1;
				y++;
				m1--;
				dir++;
				break;
			case 1:
				for(int i = y; i < n1 + y; i++) {
					cout << out[i][x] << " ";
					a++;
				}
				y += n1 - 1;
				x--;
				n1--;
				dir++;
				break;
			case 2:
				for(int i = x; i > x - m1; i--) {
					cout << out[y][i] << " ";
					a++;
				}
				x -= m1 - 1;
				y--;
				m1--;
				dir++;
				break;
			case 3:
				for(int i = y; i > y - n1; i--) {
					cout << out[i][x] << " ";
					a++;
				}
				y -= n1 - 1;
				x++;
				n1--;
				dir++;
				break;
		}
	}
}

int main() {
    int mat[100][100] = {0};
	cspiral_fill(mat, 3, 4);
	display_mat(mat, 3, 4);
	cout << endl;
	aspiral_read(mat, 3, 4);

    return 0;
}
