#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    int numInt;
    float numFloat;
    char numChar;

    cout << "Enter an int, float, and digit char (e.g., 10 3.5 5): ";
    cin >> numInt >> numFloat >> numChar;

    auto result = numInt + numFloat + (numChar - '0');

    cout << "Sum: " << result << endl;
    cout << "Type of result: " << typeid(result).name() << endl;

    return 0;
}
