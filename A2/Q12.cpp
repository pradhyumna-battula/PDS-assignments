#include <iostream>
using namespace std;

int main() {
    int age;
    double marks;

    cout << "Enter student age\t\t: ";
    cin >> age;

    cout << "Enter student marks (0-100)\t: ";
    cin >> marks;

    bool isEligible = (age >= 17 && age <= 25) && (marks >= 60) && ((marks + 5) <= 100);

    cout << "--- Result ---" << endl;
    if (isEligible) {
        cout << "Status: Eligible for Scholarship" << endl;
    } else {
        cout << "Status: Not Eligible for Scholarship" << endl;
    }

    return 0;
}
