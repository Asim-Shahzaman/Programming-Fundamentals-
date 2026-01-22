#include <iostream>
using namespace std;

int main() {
    int *ptr = nullptr;

    if (ptr == nullptr) {
        cout << "Pointer is null and does not point to valid memory.";
    } else {
        cout << "Pointer address: " << ptr;
    }

    return 0;
}

