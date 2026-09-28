#include <iostream>
using namespace std;

int findSingleNumber(const int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i]; // Bitwise XOR accumulating over all elements
    }
    return result;
}

int main() {
    int arr[] = {7, 3, 5, 3, 7, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int singleNum = findSingleNumber(arr, n);

    cout << "The unique element is: " << singleNum << endl; // Output: 9

    return 0;
}
