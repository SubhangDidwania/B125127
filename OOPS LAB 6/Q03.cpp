#include <iostream>
using namespace std;

int main() {
    int books[6] = {101, 202, 303, 404, 505, 606};
    int *ptr = books;

    cout << "Book IDs using pointer:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Book ID " << i + 1 << ": " << *(ptr + i) << endl;
    }

    cout << "Addresses of each book ID:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Book ID " << i + 1 << " address: " << (ptr + i) << endl;
    }

    return 0;
}
