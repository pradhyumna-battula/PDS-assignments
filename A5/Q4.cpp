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

void findSaddlePoints(int mat[][100], int n, int m) {
    bool found = false;
    cout << "Output: ";
    
    for(int i = 0; i < n; i++) {
        // Find the minimum element in row i
        int col_idx = 0;
        int row_min = mat[i][0];
        for(int j = 1; j < m; j++) {
            if(mat[i][j] < row_min) {
                row_min = mat[i][j];
                col_idx = j;
            }
        }
        
        // Check if row_min is also the maximum in its column
        bool is_saddle = true;
        for(int k = 0; k < n; k++) {
            if(mat[k][col_idx] > row_min) {
                is_saddle = false;
                break;
            }
        }
        
        if(is_saddle) {
            if(found) cout << " and ";
            cout << row_min << " at (" << i << "," << col_idx << ")";
            found = true;
        }
    }
    
    for(int i = 0; i < n; i++) {
        int col_idx = 0;
        int row_max = mat[i][0];
        for(int j = 1; j < m; j++) {
            if(mat[i][j] > row_max) {
                row_max = mat[i][j];
                col_idx = j;
            }
        }
        
        bool is_saddle = true;
        for(int k = 0; k < n; k++) {
            if(mat[k][col_idx] < row_max) {
                is_saddle = false;
                break;
            }
        }
        
        if(is_saddle) {
            if(found) cout << " and ";
            cout << row_max << " at (" << i << "," << col_idx << ")";
            found = true;
        }
    }
    
    if(!found) {
        cout << "No saddle points found";
    }
    cout << endl;
}

void countPeakElements(int mat[][100], int n, int m) {
    int count = 0;
    int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
    int dy[] = {-1, -1, 0, 1, 1, 1, 0, -1};
    
    bool first = true;
    cout << "Output: Count = ";
    
    // We will collect and display them in a temporary format or count first
    int peak_vals[100], peak_r[100], peak_c[100];
    int peak_count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            bool is_peak = true;
            for(int d = 0; d < 8; d++) {
                int ni = i + dy[d];
                int nj = j + dx[d];
                
                // Check if neighbor is within bounds
                if(ni >= 0 && ni < n && nj >= 0 && nj < m) {
                    if(mat[ni][nj] >= mat[i][j]) {
                        is_peak = false;
                        break;
                    }
                }
            }
            if(is_peak) {
                peak_vals[peak_count] = mat[i][j];
                peak_r[peak_count] = i;
                peak_c[peak_count] = j;
                peak_count++;
            }
        }
    }
    
    cout << peak_count << "  (";
    for(int k = 0; k < peak_count; k++) {
        cout << peak_vals[k] << " at (" << peak_r[k] << "," << peak_c[k] << ")";
        if(k < peak_count - 1) cout << " and ";
    }
    cout << ")" << endl;
}

int main() {
    int mat1[100][100] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    cout << "Test Case 1 (saddle points):" << endl;
    cout << "Input :" << endl;
    display(mat1, 3, 3);
    findSaddlePoints(mat1, 3, 3);
    
    cout << endl;

    int mat2[100][100] = {
        {9, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };
    
    cout << "Test Case 2 (peak elements):" << endl;
    cout << "Input :" << endl;
    display(mat2, 3, 3);
    countPeakElements(mat2, 3, 3);

    return 0;
}
