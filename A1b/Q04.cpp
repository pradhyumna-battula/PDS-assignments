#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    double average = static_cast<double>(num1 + num2) / 2;

    cout << "The average of " << num1 << " and " << num2 << " is: " << average << endl;

    return 0;
}
