#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter total number of parking slots: ";
    cin >> n;

    int *slots = new int[n];

    cout << "Enter for each slot (0 = Available, 1 = Occupied):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(slots + i);
    }

    int a = 0, o = 0;

    for (int i = 0; i < n; i++) {
        if (*slots == 0) {
            a++;
        } else if (*slots == 1) {
            o++;
        }
        slots++;
    }

    cout << "Available slots: " << a << endl;
    cout << "Occupied slots: " << o << endl;

    delete[] slots;

    return 0;
}