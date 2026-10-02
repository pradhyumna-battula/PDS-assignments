#include <iostream>
using namespace std;

void analize(int a, int b, int c) {
	if(a == b && a == c) cout << "all equal\n";
	else if(a == b && a != c || b == c && b != a || c == a && c != b) cout << "exactly two equal\n";
	else if(a != b && b != c && c != a) cout << "all distint\n";
	
	if(a >= b) {
		if(a >= c) cout << a;
		else cout << c;
	} else {
		if(b >= c) cout << b;
		else cout << c;	
	}
	cout << " is largest number\n";
	
	if(a <= b) {
		if(a <= c) cout << a;
		else cout << c;
	} else {
		if(b <= c) cout << b;
		else cout << c;	
	}
	cout << " is smallest number\n";
	
}

int main() {
    
    analize(1,2,3);

    return 0;
}
