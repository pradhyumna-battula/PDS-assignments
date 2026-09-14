#include <iostream>
using namespace std;

int main() {
    enum trafic_light {RED, YELLOW, GREEN};
    trafic_light currunt_state;
    int input;
    cout << "Enter current state (0 for RED, 1 for YELLOW, 2 for GREEN): ";
    cin >> input;
    trafic_light next_state;

    currunt_state = static_cast<trafic_light>(input);

    switch (currunt_state) {
        case RED:
            next_state = YELLOW;
            break;
        case YELLOW:
            next_state = GREEN;
            break;
        case GREEN:
            next_state = RED;
            break;
        default:
            cout << "invalid state input";
            return 0;
    }
    
    cout << "next state: " << next_state;

    return 0;
}
