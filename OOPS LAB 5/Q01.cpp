#include <iostream>
using namespace std;

int calculate(int a, int b) { // Function to calculate sum of two integers
    return a + b;
}

int calculate(int a, int b, int c) { // Function overloading to calculate sum of three integers
    return a + b + c;
}

float calculate(float a, float b) { // Function overloading to calculate sum of two floats
    return a + b;
}

int main() {
    int sum1 = calculate(5, 10);
    int sum2 = calculate(5, 10, 15);
    float sum3 = calculate(5.5f, 10.5f);

    cout << "Sum of two integers: " << sum1 << endl;
    cout << "Sum of three integers: " << sum2 << endl;
    cout << "Sum of two floats: " << sum3 << endl;

    return 0;
}
