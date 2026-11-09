#include <iostream>
#include <string>

using namespace std;

struct Patient {
    int id;
    string name;
    int age;
    string disease;
    float cost;
};

int main() {
    int n;
    cout << "Enter the number of patients: ";
    cin >> n;

    Patient* patients = new Patient[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for patient " << i + 1 << ":" << endl;
        cout << "Enter Patient ID: ";
        cin >> patients[i].id;
        cout << "Enter Name: ";
        cin >> patients[i].name;
        cout << "Enter Age: ";
        cin >> patients[i].age;
        cout << "Enter Disease: ";
        cin >> patients[i].disease;
        cout << "Enter Treatment Cost: ";
        cin >> patients[i].cost;
    }

    int choice;
    do {
        cout << "\n--- Hospital Management Menu ---" << endl;
        cout << "1. Display patients whose treatment cost exceeds a given amount" << endl;
        cout << "2. Find the patient with the highest treatment cost" << endl;
        cout << "3. Calculate the total treatment cost for all patients" << endl;
        cout << "4. Search for a patient using their patient ID" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                float amount;
                cout << "Enter the threshold treatment cost: ";
                cin >> amount;
                bool found = false;
                cout << "\n--- Patients with Cost Exceeding " << amount << " ---" << endl;
                for (int i = 0; i < n; i++) {
                    if (patients[i].cost > amount) {
                        cout << "ID: " << patients[i].id 
                             << ", Name: " << patients[i].name 
                             << ", Age: " << patients[i].age 
                             << ", Disease: " << patients[i].disease 
                             << ", Cost: " << patients[i].cost << endl;
                        found = true;
                    }
                }
                if (!found) {
                    cout << "No patients found exceeding this amount." << endl;
                }
                break;
            }
            case 2: {
                if (n <= 0) break;
                int max_idx = 0;
                for (int i = 1; i < n; i++) {
                    if (patients[i].cost > patients[max_idx].cost) {
                        max_idx = i;
                    }
                }
                cout << "\n--- Patient with the Highest Treatment Cost ---" << endl;
                cout << "ID: " << patients[max_idx].id << endl;
                cout << "Name: " << patients[max_idx].name << endl;
                cout << "Age: " << patients[max_idx].age << endl;
                cout << "Disease: " << patients[max_idx].disease << endl;
                cout << "Cost: " << patients[max_idx].cost << endl;
                break;
            }
            case 3: {
                float total_cost = 0;
                for (int i = 0; i < n; i++) {
                    total_cost += patients[i].cost;
                }
                cout << "\nTotal Treatment Cost for all patients: " << total_cost << endl;
                break;
            }
            case 4: {
                int search_id;
                cout << "Enter Patient ID to search: ";
                cin >> search_id;
                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (patients[i].id == search_id) {
                        cout << "\n--- Patient Found ---" << endl;
                        cout << "ID: " << patients[i].id << endl;
                        cout << "Name: " << patients[i].name << endl;
                        cout << "Age: " << patients[i].age << endl;
                        cout << "Disease: " << patients[i].disease << endl;
                        cout << "Cost: " << patients[i].cost << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Patient with ID " << search_id << " not found." << endl;
                }
                break;
            }
            case 5:
                cout << "Exiting program. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    delete[] patients;

    return 0;
}
