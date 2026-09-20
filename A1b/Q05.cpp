#include <iostream>

using namespace std;

int main() {
    char char1;
    cout << "enter a lowercase letter: ";
    cin >> char1;
    
    cout << "the letter in uppercase: " << char(char1 - 32);


    return 0;
}
