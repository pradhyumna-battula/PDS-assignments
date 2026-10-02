#include <iostream>
using namespace std;

void tracker() {
	static int called = 0;
	called++;
	cout << "tracker() has been called " << called << " times(s)\n";
}

int main() {
    cout << "local variables\n";
    int i = 10;
    while(i--) {
    	tracker();
	}

    return 0;
}
