#include <iostream>

void transform(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] = arr[i] * arr[i];        // Square even elements
        } else {
            arr[i] = arr[i] * arr[i] * arr[i]; // Cube odd elements
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    transform(arr, n);

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    // Output: 1 4 27 16 125

    return 0;
}
/*When an array is passed to a function in C++, it decays into a pointer pointing to its first element (&arr[0]).

The parameter int arr[] is treated internally as int* arr.

The function receives a copy of the memory address of the original array, rather than a full copy of the array elements.

When transform modifies elements using indexing (arr[i]), it directly alters the memory locations where the array resides in main().*/
