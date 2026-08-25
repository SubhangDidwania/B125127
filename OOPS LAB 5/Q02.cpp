#include <iostream>
using namespace std;

void compare(int a, int b) { // Function to compare two integers
    if (a < b) {
        cout << a << " is less than " << b << endl;
    }
    else if (a > b) {
        cout << a << " is greater than " << b << endl;
    } else {
        cout << a << " is equal to " << b << endl;
    }
}

void compare(float a, float b) { // Function overloading to compare two floats
    if (a < b) {
        cout << a << " is less than " << b << endl;
    }
    else if (a > b) {
        cout << a << " is greater than " << b << endl;
    } else {
        cout << a << " is equal to " << b << endl;
    }
}

void compare(int a, int b, int c) { // Function overloading to compare three integers
    if (a < b && a < c) {
        cout << a << " is the smallest among " << a << ", " << b << ", and " << c << endl;
    }
    else if (b < a && b < c) {
        cout << b << " is the smallest among " << a << ", " << b << ", and " << c << endl;
    } else {
        cout << c << " is the smallest among " << a << ", " << b << ", and " << c << endl;
    }
}

int main() {
    int x = 5, y = 10;
    float m = 3.5, n = 2.1;
    int p = 7, q = 4, r = 9;

    compare(x, y); // Compare two integers
    compare(m, n); // Compare two floats
    compare(p, q, r); // Compare three integers

    return 0;
}
