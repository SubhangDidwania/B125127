#include <iostream>
using namespace std;

int main() {
    int parcels = 25;         
    int *ptr = &parcels;       

    cout << "Initial number of parcels: " << *ptr << endl;

    int increase;
    cout << "Enter number of parcels to increase: ";
    cin >> increase;

    *ptr += increase;

    cout << "New number of parcels: " << *ptr << endl;

    return 0;
}
