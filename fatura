#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Struktura për një artikull
struct Item {
    string name;
    double price;
};

// Struktura për një porosi
struct Order {
    int orderID;
    vector<Item> items; // lejon multiple items
};

// Funksion për të shtuar një artikull në porosi
void addItemToOrder(Order &order, const string &itemName, double price) {
    Item newItem;
    newItem.name = itemName;
    newItem.price = price;
    order.items.push_back(newItem);
}

// Funksion për të printuar një porosi
void printOrder(const Order &order) {
    cout << "Order ID: " << order.orderID << endl;
    double total = 0;
    for (const auto &item : order.items) {
        cout << "- " << item.name << " : $" << item.price << endl;
        total += item.price;
    }
    cout << "Total: $" << total << endl;
    cout << "---------------------\n";
}

int main() {
    // Lista e porosive
    vector<Order> orders;

    // Krijojmë një porosi të re
    Order order1;
    order1.orderID = 1;

    // Shtojmë artikuj në porosi
    addItemToOrder(order1, "Hamburger", 2.0);
    addItemToOrder(order1, "Pizza", 5.0);
    addItemToOrder(order1, "Sandwich", 2.5);
    addItemToOrder(order1, "Fried Chicken", 3.0);
    

    // Ruajmë porosinë në listë
    orders.push_back(order1);

    // Printojmë të gjitha porositë
    for (const auto &order : orders) {
        printOrder(order);
    }

    return 0;
}
