#include <iostream>
using namespace std;

int gcd(int a, int b) {
	while(a != 0 && b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a + b;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int gcdn(int arr[], int n) {
	int a = gcd(arr[0], arr[1]);
	for(int i = 2; i < n; i++) {
		a = gcd(arr[i], a);
	}
	return a;
}

int lcmn(int arr[], int n) {
	int a = lcm(arr[0], arr[1]);
	for(int i = 2; i < n; i++) {
		a = lcm(arr[i], a);
	}
	return a;
}

int main() {
    
    int arr1[3];
    cout << "enter three numbers: ";
    for(int i = 0; i < 3; i++) {
        cin >> arr1[i];
    }
    cout << "\ntheir lcm = " << lcmn(arr1, 3);
    cout << "\ntheir gcd = " << gcdn(arr1, 3);

    return 0;
}
