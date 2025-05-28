/*
✅ New Features
1. 🔒 Password Encryption (Basic Hash)
We'll hash the password using a simple custom function (since C++ stdlib doesn't have secure hashing built-in without external libraries).

You can upgrade it later to use SHA-256 with OpenSSL if needed.

2. 📁 View Order History
Admin can view previous orders saved in order_history.txt.

3. 👥 Admin vs Staff Login
Two roles:

Admin: Can view history, full access.

Staff: Can only take orders and generate bills.
---
👤 Logins
Role	Username	Password
Admin	admin	password
Staff	staff	staff123

*/
#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

struct MenuItem {
    int id;
    string name;
    double price;
};

struct OrderItem {
    MenuItem item;
    int quantity;
};

// Basic password "hashing" for demonstration
string simpleHash(const string& input) {
    unsigned int hash = 0;
    for (char c : input) {
        hash = (hash * 31 + c) % 100000;
    }
    return to_string(hash);
}

class Restaurant {
private:
    vector<MenuItem> menu;
    vector<OrderItem> orderList;
    string currentRole = "guest";

public:
    Restaurant() {
        menu.push_back({1, "Margherita Pizza", 250});
        menu.push_back({2, "Paneer Tikka", 200});
        menu.push_back({3, "Masala Dosa", 150});
        menu.push_back({4, "Veg Biryani", 180});
        menu.push_back({5, "Chole Bhature", 120});
    }

    void displayMenu() {
        cout << "\n----- MENU -----\n";
        cout << left << setw(5) << "ID" << setw(20) << "Item" << setw(10) << "Price (INR)\n";
        for (const auto& item : menu) {
            cout << left << setw(5) << item.id << setw(20) << item.name << setw(10) << item.price << "\n";
        }
    }

    void takeOrder() {
        int id, qty;
        char choice;
        orderList.clear();

        while (true) {
            displayMenu();
            cout << "\nEnter item ID to order: ";
            cin >> id;

            bool found = false;
            for (const auto& item : menu) {
                if (item.id == id) {
                    cout << "Enter quantity: ";
                    cin >> qty;
                    orderList.push_back({item, qty});
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Invalid item ID!\n";
            }

            cout << "Add more items? (y/n): ";
            cin >> choice;
            if (choice == 'n' || choice == 'N') break;
        }
    }

    void generateBill() {
        double total = 0;
        ofstream file("order_history.txt", ios::app);

        cout << "\n----- BILL -----\n";
        file << "\n----- ORDER -----\n";
        cout << left << setw(20) << "Item" << setw(10) << "Qty" << setw(10) << "Price" << setw(10) << "Total\n";
        file << left << setw(20) << "Item" << setw(10) << "Qty" << setw(10) << "Price" << setw(10) << "Total\n";

        for (const auto& order : orderList) {
            double lineTotal = order.quantity * order.item.price;
            cout << left << setw(20) << order.item.name
                 << setw(10) << order.quantity
                 << setw(10) << order.item.price
                 << setw(10) << lineTotal << "\n";

            file << left << setw(20) << order.item.name
                 << setw(10) << order.quantity
                 << setw(10) << order.item.price
                 << setw(10) << lineTotal << "\n";

            total += lineTotal;
        }

        cout << "-------------------------------\n";
        cout << "Grand Total: INR " << total << "\n";
        file << "-------------------------------\n";
        file << "Grand Total: INR " << total << "\n";
        file << "===============================\n";

        file.close();
    }

    void viewOrderHistory() {
        cout << "\n===== ORDER HISTORY =====\n";
        ifstream file("order_history.txt");
        if (!file) {
            cout << "No order history found.\n";
            return;
        }

        string line;
        while (getline(file, line)) {
            cout << line << "\n";
        }

        file.close();
    }

    bool login() {
        string username, password;
        cout << "===== LOGIN =====\n";
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        // Simulated user database
        string adminHash = simpleHash("password");
        string staffHash = simpleHash("staff123");

        if (username == "admin" && simpleHash(password) == adminHash) {
            cout << "Admin login successful.\n";
            currentRole = "admin";
            return true;
        } else if (username == "staff" && simpleHash(password) == staffHash) {
            cout << "Staff login successful.\n";
            currentRole = "staff";
            return true;
        } else {
            cout << "Invalid credentials.\n";
            return false;
        }
    }

    void run() {
        if (!login()) return;

        int choice;
        while (true) {
            cout << "\n===== RESTAURANT MANAGEMENT (" << currentRole << ") =====\n";
            cout << "1. Show Menu\n";
            cout << "2. Take Order\n";
            cout << "3. Generate Bill & Save\n";
            if (currentRole == "admin")
                cout << "4. View Order History\n";
            cout << "0. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    displayMenu();
                    break;
                case 2:
                    takeOrder();
                    break;
                case 3:
                    generateBill();
                    break;
                case 4:
                    if (currentRole == "admin") {
                        viewOrderHistory();
                    } else {
                        cout << "Unauthorized.\n";
                    }
                    break;
                case 0:
                    cout << "Goodbye!\n";
                    return;
                default:
                    cout << "Invalid choice. Try again.\n";
            }
        }
    }
};

int main() {
    Restaurant r;
    r.run();
    return 0;
}

