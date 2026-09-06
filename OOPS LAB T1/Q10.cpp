#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of student IDs: ";
    cin >> n;

    int* ptr = new int[n];
    cout << "Enter " << n << " student IDs:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(ptr + i);
    }

    int searchID;
    cout << "Enter a student ID to search: ";
    cin >> searchID;

    for (int i = 0; i < n; i++) {
        if (*(ptr + i) == searchID) {
            cout << "Student ID " << searchID << " found at index " << i << endl;
            delete[] ptr;
            return 0;
        }
    }
    cout << "Student ID " << searchID << " not found" << endl;
    delete[] ptr;
    return 0;

}