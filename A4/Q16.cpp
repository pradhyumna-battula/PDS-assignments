#include <iostream>
using namespace std;

int exp(int base, int pow) {
	int output = 1;
	for(int i = 1; i <= pow; i++) {
		output *= base;
	}
	return output;
}

int count_digits(int n) {
	int digits = 0;
	while(n > 0) {
		digits++;
		n /= 10;
	}
	return digits;
}

bool is_amstrong(int n) {
	int sum = 0;
	int a = n;
	int digits = count_digits(n);
	while(n > 0) {
		sum += exp(n % 10, digits);
		n /= 10;
	}
	if(a == sum) return true;
	else return false;
}

void print_amstrong(int L, int R) {
	for(int i = L; i <= R; i++) {
		if(is_amstrong(i)) cout << i << ' ';
	}
}

int main() {
    cout << "amstrong numbers between l and r\n";
    cout << "enter left limit(l): ";
    int l;
    cin >> l;
    cout << "enter right limit(r): ";
    int r;
    cin >> r;
	print_amstrong(l, r);

    return 0;
}
