#include <iostream>
using namespace std;

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }

int main() {
    int choice;
    double x, y;
    char again;

    do {
        cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
        cout << "Enter choice: ";
        cin >> choice;

        cout << "Enter two numbers: ";
        cin >> x >> y;

        switch(choice) {
            case 1: cout << "Result = " << add(x, y); break;
            case 2: cout << "Result = " << subtract(x, y); break;
            case 3: cout << "Result = " << multiply(x, y); break;
            case 4: cout << "Result = " << divide(x, y); break;
            default: cout << "Invalid choice!";
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> again;

    } while(again == 'y' || again == 'Y');

    return 0;
}

