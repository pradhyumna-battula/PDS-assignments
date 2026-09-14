#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    char charArray[100];
    cin.getline(charArray, 100);
    
    string strObject = charArray;

    int arrayLength = strlen(charArray);
    int stringLength = strObject.length();

    cout << "Word: " << strObject << "\nLength of char array using strlen(): " << arrayLength << "\nLength of string object using length(): " << stringLength << "\n\n";

    if (arrayLength == stringLength) {
        cout << "Result: Both lengths match successfully!\n";
    }
    else {
        cout << "Result: The lengths do not match.\n";
    }

    return 0;
}
