#include <iostream>
using namespace std;

void tracker_static() {
    // Initialized only once when the program reaches this statement
    static int count = 0; 
    count++;
    cout << "Static Tracker called: " << count << " time(s)\n";
}

int global_count = 0; // Accessible throughout the entire file

void tracker_global() {
    global_count++;
    cout << "Global Tracker called: " << global_count << " time(s)\n";
}

int main() {
    cout << "--- Testing Static Local Variable Version ---\n";
    tracker_static(); // Output: 1
    tracker_static(); // Output: 2
    tracker_static(); // Output: 3

    cout << "\n--- Testing Global Variable Version ---\n";
    tracker_global(); // Output: 1
    tracker_global(); // Output: 2
    tracker_global(); // Output: 3

    return 0;
}
