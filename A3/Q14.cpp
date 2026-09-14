#include <iostream>
using namespace std;

enum Weekday { MONDAY, TUEDAY, WEDDAY, THUDAY, FRIDAY, SATDAY, SUNDAY };

int main() {
    for (int i = MONDAY; i <= SUNDAY; i++) {
        Weekday currentDay = static_cast<Weekday>(i);

        switch (currentDay) {
            case MONDAY:
            case TUEDAY:
            case WEDDAY:
            case THUDAY:
            case FRIDAY:
                cout << "Day " << i << ": Weekday\n";
                break;

            case SATDAY:
            case SUNDAY:
                cout << "Day " << i << ": Weekend\n";
                break;
        }
    }

    return 0;
}
