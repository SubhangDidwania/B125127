#include <iostream>
#include <string>
using namespace std;

class Calculator {
private:
    int num1;
    int num2;
public:
    void setNumbers(int a, int b) {
        num1 = a;
        num2 = b;
    }

    int add() {
        return num1 + num2;
    }

    int subtract() {
        return num1 - num2;
    }

    int multiply() {
        return num1 * num2;
    }

    double divide() {
        if (num2 != 0) {
            return static_cast<double>(num1) / num2;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0.0; // Return 0.0 to indicate an error
        }
    }
};

int main() {
    Calculator calc;
    int a, b;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    calc.setNumbers(a, b);

    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;

    return 0;
}