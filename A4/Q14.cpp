#include <iostream>
using namespace std;

int x=10; //global scope, can be accesed anywhere
void test() {
	int x=20; //local scope, deleted after function is over
	static int y=0; //local scope, not initialized only when function is first called and not deleted
	x++;
	y++;
	cout << x << " " << y << endl;
}

int main() {
    
  	test();
	test();
	test();
  	cout << x;

    return 0;
}
