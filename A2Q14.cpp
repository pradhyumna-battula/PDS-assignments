#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "enter 3 numbers: ";
	cin >> a >> b >> c;
	if(a >= b) {
	    if(a >= c) cout << a;
	    else cout << c;
	}
	else {
	    if(b >= c) cout << b;
	    else cout << c;
	}
	
	cout << " is the largest among the entered numbers";
	
	return 0;
}
