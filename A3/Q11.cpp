#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    cout << "=== Calculator Menu ===\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 + num2 << endl;
            break;

        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 - num2 << endl;
            break;

        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 * num2 << endl;
            break;

        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed.\n";
            } else {
                cout << "Result: " << num1 / num2 << endl;
            }
            break;

        default:
            cout << "Error: Invalid choice! Please select an option from 1 to 4.\n";
            break;
    }

    return 0;
}
