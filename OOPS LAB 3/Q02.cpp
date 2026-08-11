#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n; // read the size of the array from user input

    int *a = new int[n]; // dynamically allocate an array of n integers

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // assign values to the array
    }
    cout << "The array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; // print the values of the array
    }

    delete[] a; // deallocate the memory
    
    return 0;
}