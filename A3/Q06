#include <iostream>
using namespace std;

int main() {
    cout << "enter three lenths: ";
    int a, b, c;
    cin >> a >> b >> c;
    if(max(a, max(b, c)) * 2 >= a + b + c) {
        cout << "invalid triangle";
        return 0;
    }
    if(max(a * a, max(b * b, c * c)) * 2 == a * a + b * b + c * c) {
        cout << "right ";
    }
    else if(max(a * a, max(b * b, c * c)) * 2 > a * a + b * b + c * c) {
        cout << "obtuse ";
    }
    else {
        cout << "acute ";
    }
    if(a == b && b == c) {
        cout << "equilatral ";
    }
    else if(a == b && a != c || b == c && b != a || c == a && c != b) {
        cout << "isocelese ";
    }
    else {
        cout << "scalene ";
    }
    cout << "triangle";

    return 0;
}
