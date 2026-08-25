#include <iostream>
using namespace std;

void modify(int &x, int v) { 
    x += v;
}

void modify(float &x, float v) {
    x += v;
}

void modify(int *x, int v) {
    *x += v;
}

int main() {
    int a = 10;
    float b = 5.5;
    int c = 20;

    cout << "Integer before: " << a << endl;
    modify(a, 5);
    cout << "Integer after: " << a << endl;

    cout << "Float before: " << b << endl;
    modify(b, 2.5f);
    cout << "Float after: " << b << endl;

    cout << "Pointer integer before: " << c << endl;
    modify(&c, 10);
    cout << "Pointer integer after: " << c << endl;

    return 0;
}