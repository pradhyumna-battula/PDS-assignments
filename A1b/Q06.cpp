#include <iostream>

using namespace std;

int main() {
    char char1;
    cout << "enter a character: ";
    cin >> char1;
    
    cout << "the character ASCII value: " << int(char1);

    int int1;
    cout << "\nenter an ASCII value (0 - 127): ";
    cin >> int1;

    cout << "the corrosponding char: " << char(int1);

    return 0;
}
