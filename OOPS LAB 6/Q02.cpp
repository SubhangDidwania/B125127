#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    Complex operator-(const Complex& c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(6, 9), c2(2, 4);
    Complex c3 = c1 - c2;

    cout << "C1 = ";
    c1.display();
    cout << "C2 = ";
    c2.display();
    cout << "C1 - C2 = ";
    c3.display();

    return 0;
}
