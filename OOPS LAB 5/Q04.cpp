#include <iostream>
using namespace std;

int search(int a[], int n, int x) { // Function to search for an integer in an array
    for (int i = 0; i < n; i++)
        if (a[i] == x) return i;
    return -1;
}

int search(char a[], int n, char x) { // Function overloading to search for a character in an array
    for (int i = 0; i < n; i++)
        if (a[i] == x) return i;
    return -1;
}

int search(int a[], int start, int end, int x) { // Function overloading to search for an integer in a specific range of an array
    for (int i = start; i <= end; i++)
        if (a[i] == x) return i;
    return -1;
}

int main() {
    int a[] = {10, 20, 30, 40, 50};
    char b[] = {'a', 'b', 'c', 'd'};

    int p1 = search(a, 5, 30);
    int p2 = search(b, 4, 'c');
    int p3 = search(a, 1, 3, 40);

    cout << "Integer position: " << p1 << endl;
    cout << "Character position: " << p2 << endl;
    cout << "Range search position: " << p3 << endl;

    return 0;
}