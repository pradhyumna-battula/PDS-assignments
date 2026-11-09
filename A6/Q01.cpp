#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    Employee* emp = new Employee[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for employee " << i + 1 << ":" << endl;
        cout << "Enter Employee ID: ";
        cin >> emp[i].id;
        cout << "Enter Name: ";
        cin >> emp[i].name;
        cout << "Enter Salary: ";
        cin >> emp[i].salary;
    }

    int highest_index = 0;
    for (int i = 1; i < n; i++) {
        if (emp[i].salary > emp[highest_index].salary) {
            highest_index = i;
        }
    }

    cout << "\n--- Employee with the Highest Salary ---" << endl;
    cout << "ID: " << emp[highest_index].id << endl;
    cout << "Name: " << emp[highest_index].name << endl;
    cout << "Salary: " << emp[highest_index].salary << endl;

    delete[] emp;

    return 0;
}
