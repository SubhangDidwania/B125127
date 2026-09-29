#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int f = 0, int i = 0) {
        feet = f;
        inches = i;
    }

    Distance operator+(const Distance& d) const {
        int totalInches = (feet * 12 + inches) + (d.feet * 12 + d.inches);
        int resultFeet = totalInches / 12;
        int resultInches = totalInches % 12;
        return Distance(resultFeet, resultInches);
    }

    void display() const {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d1(5, 8), d2(3, 7);
    Distance d3 = d1 + d2;

    cout << "Distance 1: ";
    d1.display();
    cout << "Distance 2: ";
    d2.display();
    cout << "Result: ";
    d3.display();

    return 0;
}
