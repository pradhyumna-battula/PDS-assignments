#include <iostream>
using namespace std;

void run_gen(int state[], int m, int n);
int alive_neigbours(int state[], int m, int n, int i1, int j1);
void display(int state[], int m, int n);

void run_gen(int state[], int m, int n) {
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < m; i++) {
            int neigbours = alive_neigbours(state, m, n, i, j);
            if(neigbours == 3) {
                if(state[i + j * m] == 0) {
                    state[i + j * m] = 3;
                } else {
                    state[i + j * m] = 5;
                }
            } else if(neigbours == 2) {
                if(state[i + j * m] == 0) {
                    state[i + j * m] = 2;
                } else {
                    state[i + j * m] = 5;
                }
            } else {
                if(state[i + j * m] == 0) {
                    state[i + j * m] = 2;
                } else {
                    state[i + j * m] = 4;
                }
            }
        }
    }

    for(int j = 0; j < n; j++) {
        for(int i = 0; i < m; i++) {
            if(state[i + j * m] == 2 || state[i + j * m] == 4) {
                state[i + j * m] = 0;
            } else {
                state[i + j * m] = 1;
            }
        }
    }
}

int alive_neigbours(int state[], int m, int n, int i1, int j1) {
    int neigbours = 0;
    int neigbours_list[8][2] = {{0,-1}, {1,-1}, {1,0}, {1,1}, {0,1}, {-1,1}, {-1,0}, {-1,-1}};
    for(int i = 0; i < 8; i++) {
        if((neigbours_list[i][0] + i1) < m && (neigbours_list[i][0] + i1) >= 0 && (neigbours_list[i][1] + j1) < n && (neigbours_list[i][1] + j1) >= 0) {
            int temp = state[(i1 + neigbours_list[i][0]) + (j1 + neigbours_list[i][1]) * m];
            if(temp == 1 || temp == 4 || temp == 5) {
                neigbours++;
            }
        }
    }
    return neigbours;
}

void display(int state[], int m, int n) {
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < m; i++) {
            cout << state[i + j * m] << " \t";
        }
        cout << "\n";
    }
}

int main() {
    int a[9] = {0,0,0,1,1,1,0,0,0};
    display(a, 3, 3);
    run_gen(a, 3, 3);
    display(a, 3, 3);

    return 0;
}
