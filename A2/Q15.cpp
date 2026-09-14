#include <iostream>
using namespace std;

int main()
{
	char c1;
	cout << "type a character: ";
	cin.get(c1);
	int n1 = int(c1);
	cout << "you entered a";
	if(n1 >= 32 && n1 <= 126) {
	    if(n1 >= 65 && n1 <= 90) cout << "n uppeecase letter";
	    else if(n1 >= 97 && n1 <= 122) cout << " lowercase letter";
	    else if(n1 >= 48 && n1 <= 57) cout << " digit";
	    else cout << " special character";
	}
	else cout << " non printable character";
	
	return 0;
}
