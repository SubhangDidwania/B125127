#include <iostream>
using namespace std;

int main() {
    double balance = 1027.50; 
    double *ptr = &balance;   

    cout << "Current balance: " << *ptr << endl;

    double add;
    cout << "Enter amount to add: ";
    cin >> add;
    *ptr += add;

    double deduct;
    cout << "Enter amount to deduct: ";
    cin >> deduct;
    *ptr -= deduct;

    cout << "Final balance: " << *ptr << endl;

    return 0;
}
