#include <iostream>
using namespace std;

int main() { // Main function to calculate the sum and average of an array of numbers
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    float *arr = new float[n]; // Dynamically allocate an array of n floats

    float sum = 0; // Variable to store the sum of the elements

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    float average = sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    delete[] arr; // Deallocate the memory for the array

    return 0;
}