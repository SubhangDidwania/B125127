#include <iostream>
using namespace std;

int maximum(int a, int b) {
    return (a > b) ? a : b;
}

int maximum(int *a, int *b) {
    return (*a > *b) ? *a : *b;
}

int maximum(int *arr, int n) {
    int max = arr[0];

    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

int main() {
    int a = 10, b = 20;
    int arr[] = {5, 15, 8, 25, 12};

    cout << "Two integers: " << maximum(a, b) << endl;
    cout << "Two pointers: " << maximum(&a, &b) << endl;
    cout << "Array maximum: " << maximum(arr, 5) << endl;

    return 0;
}