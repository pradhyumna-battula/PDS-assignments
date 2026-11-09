#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student {
    int id;
    string name;
    float marks;
};

int main() {
    ofstream outFile("students.txt");

    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    cout << "Enter details for 5 students (ID, Name, Marks):\n";
    for (int i = 0; i < 5; i++) {
        Student s;
        cout << "\nStudent " << i + 1 << ":" << endl;
        cout << "Enter ID: ";
        cin >> s.id;
        cout << "Enter Name: ";
        cin >> s.name;
        cout << "Enter Marks: ";
        cin >> s.marks;

        outFile << s.id << " " << s.name << " " << s.marks << endl;
    }

    outFile.close();
    cout << "\nData successfully written to 'students.txt'\n" << endl;

    ifstream inFile("students.txt");

    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "--- Contents of 'students.txt' ---" << endl;
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}
