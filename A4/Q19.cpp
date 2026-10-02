#include <iostream>

using namespace std;

int main() {
    float marks[5];
    float total = 0;
    float percentage = 0;
    int failedSubjects = 0;

    cout << "Enter marks for 5 subjects (0 to 100):\n";

    for (int i = 0; i < 5; i++) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> marks[i];

        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks! Must be between 0 and 100." << endl;
            return 0;
        }

        total = total + marks[i];
    }

    cout << "\n--- Subject Grades ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << (i + 1) << " Grade: ";

        if (marks[i] >= 90) {
            cout << "A+" << endl;
        } else if (marks[i] >= 80) {
            cout << "A" << endl;
        } else if (marks[i] >= 70) {
            cout << "B" << endl;
        } else if (marks[i] >= 60) {
            cout << "C" << endl;
        } else if (marks[i] >= 50) {
            cout << "D" << endl;
        } else if (marks[i] >= 40) {
            cout << "E" << endl;
        } else {
            cout << "Fail" << endl;
            failedSubjects = failedSubjects + 1;
        }
    }

    percentage = total / 5.0;

    cout << "\n--- Result Summary ---" << endl;
    cout << "Total Marks: " << total << " / 500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Number of failed subjects: " << failedSubjects << endl;

    if (failedSubjects == 0) {
        cout << "Subject Status: Passed in all subjects." << endl;
    } else if (failedSubjects == 1) {
        cout << "Subject Status: Exactly one subject failed." << endl;
    } else {
        cout << "Subject Status: Multiple subjects failed." << endl;
    }

    if (failedSubjects == 0 && percentage >= 75) {
        cout << "Distinction Status: Qualifies for Distinction!" << endl;
    } else if (failedSubjects == 0 && percentage < 75) {
        cout << "Distinction Status: Does not qualify for Distinction (Percentage below 75%)." << endl;
    } else {
        cout << "Distinction Status: Does not qualify for Distinction (Has failed subjects)." << endl;
    }

    return 0;
}
