#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student* students = new Student[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        cout << "Enter Roll Number: ";
        cin >> students[i].rollNo;
        cout << "Enter Name: ";
        cin >> students[i].name;
        cout << "Enter Marks: ";
        cin >> students[i].marks;
    }

    ofstream outFile("students_records.txt");
    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        delete[] students;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        outFile << students[i].rollNo << " " << students[i].name << " " << students[i].marks << endl;
    }
    outFile.close();
    cout << "\nStudent records successfully written to 'students_records.txt'." << endl;

    ifstream inFile("students_records.txt");

    Student bestStudent;
    bool first = true;
    int r;
    string nm;
    float m;

    while (inFile >> r >> nm >> m) {
        if (first || m > bestStudent.marks) {
            bestStudent.rollNo = r;
            bestStudent.name = nm;
            bestStudent.marks = m;
            first = false;
        }
    }
    inFile.close();

    if (!first) {
        cout << "\n--- Student with the Highest Marks ---" << endl;
        cout << "Roll Number: " << bestStudent.rollNo << endl;
        cout << "Name: " << bestStudent.name << endl;
        cout << "Marks: " << bestStudent.marks << endl;
    } else {
        cout << "No records found in the file." << endl;
    }

    delete[] students;

    return 0;
}
