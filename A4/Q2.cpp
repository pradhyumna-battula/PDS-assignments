#include <iostream>
using namespace std;

void analizeNumber(int n, int &digits, int &sum, int &evenCount, int &oddCount);

int main() {
    int n1, digits1, sum1, evenCount1, oddCount1;
    cout << "enter a number: ";
    cin >> n1;
    analizeNumber(n1, digits1, sum1, evenCount1, oddCount1);
    cout << "the number has " << digits1 << " digits\nthe sum of the digits is " << sum1 << "\nthere are " << evenCount1 << " even digits and " << oddCount1 << " odd digits";

    return 0;
}

void analizeNumber(int n, int &digits, int &sum, int &evenCount, int &oddCount) {
	digits = 0;
	sum = 0;
	evenCount = 0;
	oddCount = 0;
	
	int i = n;
	
	if(n != 0){
		while(i > 0){
			digits++;
			sum += i % 10;
			if((i % 10) % 2 == 0) {
				evenCount++;
			}
			else {
				oddCount++;
			}
			i /= 10;
		}
	}
}
