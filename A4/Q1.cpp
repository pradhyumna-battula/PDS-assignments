#include <iostream>
using namespace std;

void swapByValue(int a, int b);
void swapByReference(int &a, int &b);
void rotateByReference(int &a, int &b, int &c);

int main() {
    
    int a = 10, b = 20, c = 30;
    cout << "before any swap:\n";
    cout << "value of a = " << a << ", value of b = " << b << endl;
    cout << "after calling swapByValue:\n";
    swapByValue(a, b);
    cout << "value of a = " << a << ", value of b = " << b << endl;
    cout << "after calling swapByReference:\n";
    swapByReference(a, b);
    cout << "value of a = " << a << ", value of b = " << b << endl;
    swapByReference(a, b);
    cout << "\n\nbefore calling rotateByReference:\n";
    cout << "value of a = " << a << ", value of b = " << b << ", value of c = " << c << endl;
    cout << "after calling rotateByReference:\n";
    rotateByReference(a, b, c);
    cout << "value of a = " << a << ", value of b = " << b << ", value of c = " << c << endl;

    return 0;
}

//pass by value cannot change the original variables as it creates a copy of the original values
void swapByValue(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

//pass by reference can modify the caller's values as it uses refrences to directly modify the values
void swapByReference(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void rotateByReference(int &a, int &b, int &c) {
	int temp = a;
	a = c;
	c = b;
	b = temp;
}
