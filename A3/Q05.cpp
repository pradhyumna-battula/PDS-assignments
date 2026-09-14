#include <iostream>
using namespace std;

int main() {
    cout << "enter a year: ";
    int year;
    cin >> year;
    if(year > 9999 || year < 1582) {
        cout << "invalid range";
        return 0;
    }
    if(year % 4 == 0 && (year % 100 == 0 && year % 400 == 0 || year % 100 != 0 && year % 400 != 0)) cout << "leap year";
    else cout << "not leap year";

    return 0;
}
