#include <iostream>
using namespace std;

int main() {
    int day;
    bool isHoliday;

    cout << "Enter day number (1 for Mon, ..., 7 for Sun): ";
    cin >> day;
    cout << "Is it a holiday? (1 for Yes, 0 for No): ";
    cin >> isHoliday;

    switch (day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            switch (isHoliday) {
                case true:
                    cout << "Holiday\n";
                    break;
                case false:
                    cout << "Working day\n";
                    break;
                default: break;
            }
            break;

        case 6:
        case 7:
            // Nested switch checking boolean isHoliday
            switch (isHoliday) {
                case true:
                    cout << "Holiday\n";
                    break;
                case false:
                    cout << "Weekend\n";
                    break;
                default: break;
            }
            break;

        default:
            cout << "Invalid day number! Please enter 1-7.\n";
            break;
    }

    return 0;
}
