#include <iostream>
using namespace std;

int main() { // Main function to find the largest element in an array
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n]; // Dynamically allocate an array of n integers

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];

    for (int i = 1; i < n; i++) { // Loop to find the largest element in the array
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest element = " << largest << endl;

    delete[] arr; // Deallocate the memory for the array

    return 0;
}