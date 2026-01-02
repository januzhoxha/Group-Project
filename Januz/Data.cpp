#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int displayMenu(string items[], double price[], int IP) {
    string order;
    cout << "The menu of our restaurant is: " <<endl;
    for(int i = 0; i < IP; i++) {
        cout << items[i] << ": " << price[i] << "$" <<endl;
    }
    cout << "What would you like to order?" <<endl;
    cin >> order;
    int maybe = 0;

    for(int i = 0; i < IP; i++) {
        if(order != items[i]){
            maybe = 0;
        } if(order == items[i]) {
            maybe = 1;
            break;
        }
    }

    if(maybe == 1) {
        cout << "One " << order << " coming right up";
    } else {
        cout << order << " is not in the menu";
    }
    return 0;
}

int main() {
    int const IP = 10;

    string items[IP] = {"Hamburger", "Pizza", "Sandwich", "Fried Chicken", "Eggs and Bacon", "Ham and Cheese", "Chicken", "Soup", "Doner", "Rizzoto"};
    double price[IP] = {2, 5, 2.5, 3, 4, 6, 4.5, 1.5, 2.5, 4};

    displayMenu(items, price, IP);
}