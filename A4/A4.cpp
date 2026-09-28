#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int p) {
	for(int i = 2; i <= sqrt(p); i++) {
		if(p % i == 0) return false;
	}
	return true;
}

int nthprime(int n) {
	int i = 1;
	while(n) {
		i++;
		if(is_prime(i)) {
			n--;
		}
	}
	return i;
}

void primeFactors(int n) {
	cout << "1 ";
	for(int i = 1; nthprime(i) <= n; i++) {
		int p = nthprime(i);
		int e = 0;
		while(n % p == 0) {
			e++;
			n /= p;
		}
		cout << "* " << p << "^" << e << " ";
	}
}

int numberOfDivisors(int n) {
	int D = 1;
	for(int i = 1; nthprime(i) <= n; i++) {
		int p = nthprime(i);
		int e = 0;
		while(n % p == 0) {
			e++;
			n /= p;
		}
		D *= e + 1;
	}
	return D;
}

int main() {
    
    int n;
    cout << "enter a number: ";
    cin >> n;
    cout << "its prime factorization: ";
    primeFactors(n);
    cout << "\nit has " << numberOfDivisors(n) << " divisors";

    return 0;
}
