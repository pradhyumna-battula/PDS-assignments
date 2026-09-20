#include <iostream>

using namespace std;

int main() {
    float floatValue;

    cout << "Enter a decimal number (float): ";
    cin >> floatValue;

    int intValue = (int)floatValue;

    cout << "\n=== Truncation Demo ===" << endl;
    cout << "Original Float: " << floatValue << "\tTruncated Int: " << intValue << endl;

    return 0;
}
