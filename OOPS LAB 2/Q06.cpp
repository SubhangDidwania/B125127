#include <iostream>
#include <string>
using namespace std;

class Distance {
private:
    int feet, inches;

public:
    void inputDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    Distance add(Distance d1, Distance d2) {
        Distance result;
        result.feet = d1.feet + d2.feet;
        result.inches = d1.inches + d2.inches;

        if (result.inches >= 12) {
            result.feet += result.inches / 12;
            result.inches = result.inches % 12;
        }
        return result;
    }

    void displayDistance() {
        cout << feet << " ft " << inches << " in" << endl;
    }
};

int main() {
    Distance d1, d2, d3;

    cout << "Enter first distance:" << endl;
    d1.inputDistance();

    cout << "Enter second distance:" << endl;
    d2.inputDistance();

    d3 = d3.add(d1, d2);

    cout << "\nFirst Distance  : ";
    d1.displayDistance();
    cout << "Second Distance : ";
    d2.displayDistance();
    cout << "Total Distance  : ";
    d3.displayDistance();

    return 0;
}