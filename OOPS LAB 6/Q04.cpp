#include <iostream>
using namespace std;

int main() {
    int seats[8] = {10, 11, 12, 13, 14, 15, 16, 17};
    int *ptr = seats;
    int position, newSeat;

    cout << "Seat numbers before update:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    cout << "Enter the position to update: ";
    cin >> position;

    cout << "Enter the new seat number: ";
    cin >> newSeat;

    *(ptr + position) = newSeat;
    cout << "Seat numbers after update:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    return 0;
}
