#include <iostream>
using namespace std;

void display(int x) {
    cout << "Integer: " << x << endl;
}

void display(float x) {
    cout << "Float: " << x << endl;
}

void display(char x) {
    cout << "Character: " << x << endl;
}

void display(int a[], int n) {
    cout << "Integer array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void display(char a[], int n) {
    cout << "Character array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int a[] = {1, 2, 3, 4};
    char b[] = {'A', 'B', 'C'};

    display(10);
    display(5.5f);
    display('X');
    display(a, 4);
    display(b, 3);

    return 0;
}