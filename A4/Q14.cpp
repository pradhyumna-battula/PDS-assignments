#include <iostream>
using namespace std;

int x=10;
void test() {
	int x=20;
	static int y=0;
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
