#include <iostream>
using namespace std;

int main() {
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;
    bool myBool;
    long myLong;
    long long myLongLong;

    cout << "Size of int: " << sizeof(myInt) << " bytes\n";
    cout << "Size of float: " << sizeof(myFloat) << " bytes\n";
    cout << "Size of double: " << sizeof(myDouble) << " bytes\n";
    cout << "Size of char: " << sizeof(myChar) << " bytes\n";
    cout << "Size of bool: " << sizeof(myBool) << " bytes\n";
    cout << "Size of long: " << sizeof(myLong) << " bytes\n";
    cout << "Size of long long: " << sizeof(myLongLong) << " bytes\n";

    return 0;
}
