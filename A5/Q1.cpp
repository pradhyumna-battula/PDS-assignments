#include <iostream>
using namespace std;

int findBaseAddress(int lr, int ur, int lc, int uc, int i, int j, int known_address, int size, int order) {
    int R = ur - lr + 1;
    int C = uc - lc + 1;
    int offset = 0;
    
    if (order == 0) {
        offset = ((i - lr) * C + (j - lc)) * size;
    } else { 
        offset = ((j - lc) * R + (i - lr)) * size;
    }
    
    return known_address - offset;
}

int findAddress(int lr, int ur, int lc, int uc, int i, int j, int base_address, int size, int order) {
    int R = ur - lr + 1;
    int C = uc - lc + 1;
    int offset = 0;
    
    if (order == 0) {
        offset = ((i - lr) * C + (j - lc)) * size;
    } else {
        offset = ((j - lc) * R + (i - lr)) * size;
    }
    
    return base_address + offset;
}

int main() {
    int lr = -5, ur = 10;
    int lc = 3, uc = 20;
    int size = 4;
    int known_i = 2, known_j = 7;
    int known_addr = 4520;
    
    int row_major_base = findBaseAddress(lr, ur, lc, uc, known_i, known_j, known_addr, size, 0);
    int col_major_base = findBaseAddress(lr, ur, lc, uc, known_i, known_j, known_addr, size, 1);
    
    cout << "Test Case 1 Outputs:" << endl;
    cout << "Row-major base address     = " << row_major_base << endl;
    cout << "Column-major base address  = " << col_major_base << endl;
    cout << endl;
    
    int target_i = 0, target_j = 10;
    int target_addr = findAddress(lr, ur, lc, uc, target_i, target_j, row_major_base, size, 0);
    
    cout << "Test Case 2 Outputs:" << endl;
    cout << "Address(A[0][10])          = " << target_addr << endl;

    return 0;
}
