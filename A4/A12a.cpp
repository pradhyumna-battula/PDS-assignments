#include <iostream>
using namespace std;

int called = 0;

void tracker() {
	called++;
	cout << "tracker() has been called " << called << " times(s)\n";
}

int main() {
    cout << "global variables\n";
    int i = 10;
    while(i--) {
    	tracker();
	}

    return 0;
}
