#include <iostream>
#include <iomanip>
using namespace std;


double calculateSubtotal(double price, int quantity) {
    return price * quantity;
}


double calculateTax(double subtotal) {
    return subtotal * 0.10;
}


double calculateDelivery(double subtotal) {
    if (subtotal >= 50)
        return 0;  
    else
        return 5;  
}

double calculateTotal(double subtotal, double tax, double delivery) {
    return subtotal + tax + delivery;
}

int main() {
    double price;
    int quantity;

    cout << "Enter product price: ";
    cin >> price;

    cout << "Enter quantity: ";
    cin >> quantity;

    double subtotal = calculateSubtotal(price, quantity);
    double tax = calculateTax(subtotal);
    double delivery = calculateDelivery(subtotal);
    double total = calculateTotal(subtotal, tax, delivery);

    cout << "\n------ BILL RECEIPT ------\n";
    cout << fixed << setprecision(2);
    cout << "Price:        $" << price << endl;
    cout << "Quantity:     " << quantity << endl;
    cout << "Subtotal:     $" << subtotal << endl;
    cout << "Tax (10%):    $" << tax << endl;
    cout << "Delivery:     $" << delivery << endl;
    cout << "--------------------------\n";
    cout << "Total:        $" << total << endl;
    cout << "--------------------------\n";

    return 0;
}
