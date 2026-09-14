#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "=== FLOAT ===\n";
    cout << "Size \t\t\t: " << sizeof(float) << " bytes\n";
    cout << "Min Positive Value \t: " << numeric_limits<float>::min() << endl;
    cout << "Max Value \t\t: " << numeric_limits<float>::max() << endl;
    cout << "Precision Digits \t: " << numeric_limits<float>::digits10 << endl << endl;

    cout << "=== DOUBLE ===\n";
    cout << "Size \t\t\t: " << sizeof(double) << " bytes\n";
    cout << "Min Positive Value \t: " << numeric_limits<double>::min() << endl;
    cout << "Max Value \t\t: " << numeric_limits<double>::max() << endl;
    cout << "Precision Digits \t: " << numeric_limits<double>::digits10 << endl << endl;

    cout << "=== LONG DOUBLE ===\n";
    cout << "Size \t\t\t: " << sizeof(long double) << " bytes\n";
    cout << "Min Positive Value \t: " << numeric_limits<long double>::min() << endl;
    cout << "Max Value \t\t: " << numeric_limits<long double>::max() << endl;
    cout << "Precision Digits \t: " << numeric_limits<long double>::digits10 << endl;

    return 0;
}
