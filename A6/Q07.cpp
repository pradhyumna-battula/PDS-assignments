#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter the size of the first sorted array: ";
    cin >> n1;

    int* arr1 = new int[n1];
    cout << "Enter " << n1 << " elements in ascending order: ";
    for (int i = 0; i < n1; i++) {
        cin >> *(arr1 + i);
    }

    cout << "Enter the size of the second sorted array: ";
    cin >> n2;

    int* arr2 = new int[n2];
    cout << "Enter " << n2 << " elements in ascending order: ";
    for (int i = 0; i < n2; i++) {
        cin >> *(arr2 + i);
    }

    int* arr3 = new int[n1 + n2];

    int* p1 = arr1;
    int* p2 = arr2;
    int* p3 = arr3;
    int* end1 = arr1 + n1;
    int* end2 = arr2 + n2;

    while (p1 < end1 && p2 < end2) {
        if (*p1 < *p2) {
            *p3 = *p1;
            p3++;
            p1++;
        } else {
            *p3 = *p2;
            p3++;
            p2++;
        }
    }

    while (p1 < end1) {
        *p3 = *p1;
        p3++;
        p1++;
    }

    while (p2 < end2) {
        *p3 = *p2;
        p3++;
        p2++;
    }

    cout << "\nMerged array in sorted order:\n";
    int* ptr = arr3;
    int* end3 = arr3 + n1 + n2;
    while (ptr < end3) {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;

    return 0;
}
