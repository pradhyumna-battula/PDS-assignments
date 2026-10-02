#include <iostream>

using namespace std;

void checkBalance(double balance) {
    cout << "\nYour balance is: Rs. " << balance << endl;
}

double deposit(double balance) {
    double amount;
    cout << "\nEnter amount to deposit: ";
    cin >> amount;

    if (amount > 0) {
        balance = balance + amount;
        cout << "Deposit successful! New balance: Rs. " << balance << endl;
    } else {
        cout << "Invalid amount! Deposit must be positive." << endl;
    }

    return balance;
}

double withdraw(double balance) {
    double amount;
    cout << "\nEnter amount to withdraw: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Invalid amount! Withdrawal must be positive." << endl;
    } 
    else {
        int intAmount = amount;
        if (amount != intAmount || intAmount % 100 != 0) {
            cout << "Withdrawal amount must be a multiple of 100!" << endl;
        } 
        else {
            if (amount > balance) {
                cout << "Insufficient balance!" << endl;
            } else {
                balance = balance - amount;
                cout << "Withdrawal successful! Remaining balance: Rs. " << balance << endl;

                if (balance < 1000) {
                    cout << "WARNING: Balance is below Rs. 1000!" << endl;
                }
            }
        }
    }

    return balance;
}

int main() {
    double balance = 50000;
    int choice;

    while (true) {
        cout << "\n--- ATM MENU ---" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            checkBalance(balance);
        } 
        else if (choice == 2) {
            balance = deposit(balance);
        } 
        else if (choice == 3) {
            balance = withdraw(balance);
        } 
        else if (choice == 4) {
            cout << "Thank you! Exiting..." << endl;
            break;
        } 
        else {
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
