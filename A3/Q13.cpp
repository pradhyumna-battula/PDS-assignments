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

int main() {
    int currunt_rotation;
    int rotation;

    cout << "enter a direction in degrees: ";
    cin >> currunt_rotation;

    Direction currunt_direction = static_cast<Direction>(currunt_rotation);
    cout << "currunt direction: " << currunt_direction << endl;

    cout << "enter a rotation angle in degrees: ";
    cin >> rotation;

    Direction new_direction = rotate(currunt_direction, rotation);
    cout << "new direction: " << new_direction << endl;

    return 0;
}
