#include <iostream>
using namespace std;

bool isPrime(int n) {
	for(int i = 2; i < n - 1; i ++) {
		if(n % i == 0) return false;
	}
	return true;
}

void printPrimes(int L, int R) {
	for(int i = L; i <= R; i++) {
		if(isPrime(i)) cout << i << ' ';
	}
}

int main() {
    
    cout << "trial division upto n-1\n";
    cout << "enter the left limit (L): ";
    int L1;
    cin >> L1;
    cout << "enter the right limit (R): ";
    int R1;
    cin >> R1;
    printPrimes(L1, R1);

    return 0;
}
