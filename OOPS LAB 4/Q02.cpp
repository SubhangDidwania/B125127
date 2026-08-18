#include <iostream>
using namespace std;

class Mobile {
    string brand, model;
    int battery;

public:
    Mobile(string b, string m, int p) { // Constructor to initialize the Mobile object
        brand = b;
        model = m;
        battery = p;
    }

    friend void checkBattery(Mobile m); // Declaring checkBattery as a friend function
};

void checkBattery(Mobile m) { // Friend function definition
    cout << "Brand: " << m.brand << endl;
    cout << "Model: " << m.model << endl;
    cout << "Battery: " << m.battery << "%" << endl;

    if (m.battery < 20)
        cout << "Battery Low" << endl;
    else
        cout << "Battery Normal" << endl;
}

int main() {
    Mobile m("Samsung", "Galaxy S21", 55); // Creating an object of Mobile class
    checkBattery(m);
    return 0;
}