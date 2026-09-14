#include <iostream>
using namespace std;

int main() {
    int month, year;

    cout << "Enter month (1-12): ";
    cin >> month;

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31 days\n";
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30 days\n";
            break;

        case 2:
            cout << "Enter year: ";
            cin >> year;
            
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                cout << "29 days (Leap Year)\n";
            } else {
                cout << "28 days\n";
            }
            break;

        default:
            cout << "Invalid month\n";
            break;
    }

    return 0;
}
