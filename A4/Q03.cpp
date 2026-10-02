#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (a != 0 && b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a + b;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int gcdn(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = gcd(arr[i], result);
    }
    return result;
}

int lcmn(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = lcm(arr[i], result);
    }
    return result;
}

int main() {
    int n;
    cout << "Enter how many numbers you want to input: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\n-----------------------------------" << endl;
    cout << "Input Numbers: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << (i == n - 1 ? "" : ", ");
    }
    cout << endl;

    cout << "Overall GCD = " << gcdn(arr, n) << endl;
    cout << "Overall LCM = " << lcmn(arr, n) << endl;
    cout << "-----------------------------------" << endl;

    return 0;
}
