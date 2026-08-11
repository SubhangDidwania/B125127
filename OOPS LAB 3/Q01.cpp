#include <iostream>
using namespace std;

int main() { // Main function to demonstrate dynamic memory allocation for a single integer
    int *ptr = new int; // Dynamically allocate memory for a single integer

    cout << "Enter an integer: ";
    cin >> *ptr;

    cout << "Value = " << *ptr << endl;

    delete ptr; // Deallocate the memory for the single integer
    ptr = nullptr; // Set the pointer to nullptr to avoid dangling pointer

    return 0;
}