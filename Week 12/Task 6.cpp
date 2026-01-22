#include <iostream>
using namespace std;

void showMenu() {
    cout << "\n1. Burger (Rs.250)";
    cout << "\n2. Pizza (Rs.800)";
    cout << "\n3. Fries (Rs.150)";
    cout << "\n4. Sandwich (Rs.200)";
    cout << "\n5. Drink (Rs.100)\n";
}

double calculateItemCost(double price, int quantity) {
    return price * quantity;
}

double calculateFinalBill(double total) {
    return total + (total * 0.10); // 10% tax
}

int main() {
    int choice, qty;
    double total = 0;
    char more;

    do {
        showMenu();
        cout << "Select item: ";
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> qty;

        switch(choice) {
            case 1: total += calculateItemCost(250, qty); break;
            case 2: total += calculateItemCost(800, qty); break;
            case 3: total += calculateItemCost(150, qty); break;
            case 4: total += calculateItemCost(200, qty); break;
            case 5: total += calculateItemCost(100, qty); break;
            default: cout << "Invalid choice!";
        }

        cout << "Order more? (y/n): ";
        cin >> more;

    } while(more == 'y' || more == 'Y');

    cout << "\nFinal Bill (with tax) = Rs." << calculateFinalBill(total);
    return 0;
}

