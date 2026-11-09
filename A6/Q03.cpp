#include <iostream>
using namespace std;

struct Product {
    int id;
    string name;
    int quantity;
    float price;
};

int main() {
    int n;
    cout << "Enter the number of products: ";
    cin >> n;

    Product* products = new Product[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for product " << i + 1 << ":" << endl;
        cout << "Enter Product ID: ";
        cin >> products[i].id;
        cout << "Enter Name: ";
        cin >> products[i].name;
        cout << "Enter Quantity: ";
        cin >> products[i].quantity;
        cout << "Enter Price: ";
        cin >> products[i].price;
    }

    float total_inventory_value = 0;
    for (int i = 0; i < n; i++) {
        total_inventory_value += products[i].quantity * products[i].price;
    }

    cout << "\nTotal Inventory Value: " << total_inventory_value << endl;

    int limit;
    cout << "\nEnter the specified quantity limit: ";
    cin >> limit;

    cout << "\n--- Products with Quantity Below " << limit << " ---" << endl;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (products[i].quantity < limit) {
            cout << "ID: " << products[i].id 
                 << ", Name: " << products[i].name 
                 << ", Quantity: " << products[i].quantity 
                 << ", Price: " << products[i].price << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No products found below the specified limit." << endl;
    }

    delete[] products;

    return 0;
}
