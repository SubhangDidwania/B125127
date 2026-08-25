#include <iostream>
using namespace std;

int count(int n) {
    if (n == 0) return 1;

    int c = 0;
    while (n != 0) {
        c++;
        n /= 10;
    }
    return c;
}

int count(int a[], int n) {
    return n;
}

int count(char a[], int n, char x) {
    int c = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == x) c++;
    return c;
}

int main() {
    int a[] = {10, 20, 30, 40};
    char b[] = {'a', 'b', 'a', 'c', 'a'};

    cout << "Digits: " << count(12345) << endl;
    cout << "Array elements: " << count(a, 4) << endl;
    cout << "Character occurrences: " << count(b, 5, 'a') << endl;

    return 0;
}