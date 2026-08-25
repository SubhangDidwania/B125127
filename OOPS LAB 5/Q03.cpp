#include <iostream>
using namespace std;

int total(int a[], int n) { // Function to calculate the total of an integer array
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

float total(float a[], int n) { // Function overloading to calculate the total of a float array
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

int total(int a[], int n, int elements) { // Function overloading to calculate the total of the first 'elements' integers in an array
    int sum = 0;
    for (int i = 0; i < elements; i++)
        sum += a[i];
    return sum;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    float b[] = {1.5, 2.5, 3.5};

    cout << "Integer array total: " << total(a, 5) << endl;
    cout << "Float array total: " << total(b, 3) << endl;
    cout << "First 3 integer elements total: " << total(a, 5, 3) << endl;

    return 0;
}