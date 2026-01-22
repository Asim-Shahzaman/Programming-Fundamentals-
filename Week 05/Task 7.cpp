#include <iostream>
using namespace std;

int main()
{
    double balance, withdrawal;

    cout << "Enter your balance: ";
    cin >> balance;

    cout << "Enter the amount to withdrawal: ";
    cin >> withdrawal;

    if (withdrawal <= balance)
    {
        balance = balance - withdrawal;
        cout << "Transaction successful" << endl;
        cout << "Remaining balance $: " << balance << endl;
    }
    else
    {
        cout << "Insufficient balance" << endl;
    }

    return 0;
}

