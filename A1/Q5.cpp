#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "short int \t\t: Min = " << numeric_limits<short>::min() << " \t\t\t| Max = " << numeric_limits<short>::max() << endl;
    cout << "int \t\t\t: Min = " << numeric_limits<int>::min() << " \t\t| Max = " << numeric_limits<int>::max() << endl;
    cout << "long int \t\t: Min = " << numeric_limits<long>::min() << " \t\t| Max = " << numeric_limits<long>::max() << endl;
    cout << "long long int \t\t: Min = " << numeric_limits<long long>::min() << " \t| Max = " << numeric_limits<long long>::max() << endl;

    cout << "\nunsigned short int \t: Min = " << numeric_limits<unsigned short>::min() << " \t\t\t| Max = " << numeric_limits<unsigned short>::max() << endl;
    cout << "unsigned int \t\t: Min = " << numeric_limits<unsigned int>::min() << " \t\t\t| Max = " << numeric_limits<unsigned int>::max() << endl;
    cout << "unsigned long int \t: Min = " << numeric_limits<unsigned long>::min() << " \t\t\t| Max = " << numeric_limits<unsigned long>::max() << endl;
    cout << "unsigned long long \t: Min = " << numeric_limits<unsigned long long>::min() << " \t\t\t| Max = " << numeric_limits<unsigned long long>::max() << endl;

    return 0;
}
