#include <iostream>
using namespace std;

enum Direction {
    NORTH = 0,
    EAST = 90,
    SOUTH = 180,
    WEST = 270
};

Direction rotate(Direction dir, int degrees) {
    int new_angle = dir + degrees;
    new_angle = (new_angle % 360 + 360) % 360;
    return static_cast<Direction>(new_angle);
}

void display_direction(Direction dir){
    switch (dir) {
        case 0:
            cout << "NORTH";
            break;
        case 90:
            cout << "EAST";
            break;
        case 180:
            cout << "SOUTH";
            break;
        case 270:
            cout << "WEST";
            break;
    }
}

int main() {
    int currunt_rotation;
    int rotation;

    cout << "enter a direction in degrees: ";
    cin >> currunt_rotation;

    Direction currunt_direction = static_cast<Direction>(currunt_rotation);
    cout << "currunt direction: ";
    display_direction(currunt_direction);
    cout << endl;

    cout << "enter a rotation angle in degrees: ";
    cin >> rotation;

    Direction new_direction = rotate(currunt_direction, rotation);
    cout << "new direction: ";
    display_direction(new_direction);
    cout << endl;

    return 0;
}
