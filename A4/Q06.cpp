#include <iostream>
using namespace std;

// (i) Swap using a temporary variable
void swapTemp(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// (ii) Swap using arithmetic operations (+ and -)
void swapArithmetic(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

// (iii) Swap using XOR bitwise operations
void swapXOR(int &a, int &b) {
    if (&a != &b) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
}

void printTest(const string &testName, int a, int b) {
    cout << "--- " << testName << " ---\n";
    cout << "Original: a = " << a << ", b = " << b << endl;

    int x = a, y = b;
    swapTemp(x, y);
    cout << "[Temp]       a = " << x << ", b = " << y << endl;

    x = a; y = b;
    swapArithmetic(x, y);
    cout << "[Arithmetic] a = " << x << ", b = " << y << endl;

    x = a; y = b;
    swapXOR(x, y);
    cout << "[XOR]        a = " << x << ", b = " << y << endl;

    cout << endl;
}

int main() {
    // Testing Positive Numbers
    printTest("Positive Values", 10, 20);

    // Testing Negative Numbers
    printTest("Negative Values", -15, -45);

    // Testing Zero Values
    printTest("Zero Values", 0, 50);

    // Testing Equal Values (Different Variables)
    printTest("Equal Values (Different Variables)", 7, 7);

    // Testing Equal Values (Aliasing / Same Variable)
    cout << "--- Testing Aliasing (Same Memory Location) ---\n";
    int val = 42;
    cout << "Original val = " << val << endl;
    
    // Passing the same reference to both parameters
    swapXOR(val, val);
    cout << "After swapXOR(val, val): val = " << val << endl;

    return 0;
}
