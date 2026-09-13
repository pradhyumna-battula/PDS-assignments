#include <iostream>
using namespace std;

int main()
{
	cout << "enter the marks: ";
	int marks;
	cin >> marks;
	if(marks >= 90) cout << "you got A grade!";
	else if(marks >= 75) cout << "you got B grade!";
	else if(marks >= 60) cout << "you got C grade!";
	else if(marks >= 40) cout << "you got D grade!";
	else if(marks >= 0 && marks < 40) cout << "you got F grade!";
	
	return 0;
}
