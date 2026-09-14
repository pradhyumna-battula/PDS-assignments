#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "| Data Type   | Size (bytes)    | Minimum Value         | Maximum Value         |\n";
    cout << "| ----------- | --------------- | --------------------- | --------------------- |\n";

    cout << "| short       | " << sizeof(short) << "\t\t| "  << numeric_limits<short>::min() << " \t\t| "  << numeric_limits<short>::max() << " \t\t|\n";
    cout << "| int         | " << sizeof(int) << "\t\t| "  << numeric_limits<int>::min() << " \t\t| "  << numeric_limits<int>::max() << " \t\t|\n";
    cout << "| long        | " << sizeof(long) << "\t\t| "  << numeric_limits<long>::min() << " \t\t| "  << numeric_limits<long>::max() << " \t\t|\n";
    cout << "| long long   | " << sizeof(long long) << "\t\t| "  << numeric_limits<long long>::min() << " \t| "  << numeric_limits<long long>::max() << " \t|\n";
    cout << "| float       | " << sizeof(float) << "\t\t| "  << numeric_limits<float>::min() << " \t\t| "  << numeric_limits<float>::max() << " \t\t|\n";
    cout << "| double      | " << sizeof(double) << "\t\t| "  << numeric_limits<double>::min() << " \t\t| "  << numeric_limits<double>::max() << " \t\t|\n";
    cout << "| long double | " << sizeof(long double) << "\t\t| "  << numeric_limits<long double>::min() << " \t\t| "  << numeric_limits<long double>::max() << " \t|\n";

    return 0;
}
