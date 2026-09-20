#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float floatVal = 3.14159265358979;
    double doubleVal = 3.14159265358979;

    cout << fixed << setprecision(15);
    cout << "Float value:  " << floatVal << endl;
    cout << "Double value: " << doubleVal << endl;

    return 0;
}
