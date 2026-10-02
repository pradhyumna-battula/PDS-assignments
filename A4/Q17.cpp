#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int p) {
	for(int i = 2; i <= sqrt(p); i++) {
		if(p % i == 0) return false;
	}
	return true;
}

int nth_prime(int n) {
	int i = 1;
	while(n) {
		i++;
		if(is_prime(i)) {
			n--;
		}
	}
	return i;
}

void prime_triangle1(int n) {
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= i; j++) {
			cout << nth_prime(j) << ' ';
		}
		cout << endl;
	}
}

void prime_triangle2(int n) {
	for(int i = 1; i <= n; i++) {
		for(int j = 1 + (i) * (i - 1) / 2; j <= i * (i + 1) / 2; j++) {
			cout << nth_prime(j) << ' ';
		}
		cout << endl;
	}
}

int main() {
	int n;
	cin >> n;
	cout << endl;
	
	prime_triangle1(n);
	cout << endl;
	prime_triangle2(n);

    return 0;
}
