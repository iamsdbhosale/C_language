#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

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

class Restaurant {
private:
    vector<MenuItem> menu;
    vector<OrderItem> orderList;

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
        cout << "\n----- BILL -----\n";
        cout << left << setw(20) << "Item" << setw(10) << "Qty" << setw(10) << "Price" << setw(10) << "Total\n";
        for (const auto& order : orderList) {
            double lineTotal = order.quantity * order.item.price;
            cout << left << setw(20) << order.item.name
                 << setw(10) << order.quantity
                 << setw(10) << order.item.price
                 << setw(10) << lineTotal << "\n";
            total += lineTotal;
        }
        cout << "-------------------------------\n";
        cout << "Grand Total: INR " << total << "\n";
    }

    void run() {
        int choice;
        while (true) {
            cout << "\n===== RESTAURANT MANAGEMENT =====\n";
            cout << "1. Show Menu\n";
            cout << "2. Take Order\n";
            cout << "3. Generate Bill\n";
            cout << "4. Exit\n";
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
                    cout << "Thank you for using Restaurant Manager!\n";
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

