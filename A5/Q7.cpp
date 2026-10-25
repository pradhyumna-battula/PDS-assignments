#include <iostream>
using namespace std;

void run_gen(int state[][100], int m, int n);
int alive_neigbours(int state[][100], int m, int n, int i1, int j1);
void display(int state[][100], int m, int n);

void run_gen(int state[][100], int m, int n) {
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < m; i++) {
            int neigbours = alive_neigbours(state, m, n, i, j);
            if(neigbours == 3) {
                if(state[j][i] == 0) {
                    state[j][i] = 3;
                } else {
                    state[j][i] = 5;
                }
            } else if(neigbours == 2) {
                if(state[j][i] == 0) {
                    state[j][i] = 2;
                } else {
                    state[j][i] = 5;
                }
            } else {
                if(state[j][i] == 0) {
                    state[j][i] = 2;
                } else {
                    state[j][i] = 4;
                }
            }
        }
    }

    for(int j = 0; j < n; j++) {
        for(int i = 0; i < m; i++) {
            if(state[j][i] == 2 || state[j][i] == 4) {
                state[j][i] = 0;
            } else {
                state[j][i] = 1;
            }
        }
    }
}

int alive_neigbours(int state[][100], int m, int n, int i1, int j1) {
    int neigbours = 0;
    int neigbours_list[8][2] = {{0,-1}, {1,-1}, {1,0}, {1,1}, {0,1}, {-1,1}, {-1,0}, {-1,-1}};
    for(int i = 0; i < 8; i++) {
        if((neigbours_list[i][0] + i1) < m && (neigbours_list[i][0] + i1) >= 0 && (neigbours_list[i][1] + j1) < n && (neigbours_list[i][1] + j1) >= 0) {
            int temp = state[j1 + neigbours_list[i][1]][i1 + neigbours_list[i][0]];
            if(temp == 1 || temp == 4 || temp == 5) {
                neigbours++;
            }
        }
    }
    return neigbours;
}

void display(int state[][100], int m, int n) {
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < m; i++) {
            cout << state[j][i] << " \t";
        }
        cout << "\n";
    }
}

int main() {
    int a[100][100] = {
        {0, 0, 0},
        {1, 1, 1},
        {0, 0, 0}
    };
    display(a, 3, 3);
    run_gen(a, 3, 3);
    cout << endl;
    display(a, 3, 3);

    return 0;
}
