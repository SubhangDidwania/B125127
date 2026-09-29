#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;

public:
    Temperature(double c = 0.0) {
        celsius = c;
    }

    bool operator<(const Temperature& t) const {
        return celsius < t.celsius;
    }

    bool operator>(const Temperature& t) const {
        return celsius > t.celsius;
    }

    bool operator==(const Temperature& t) const {
        return celsius == t.celsius;
    }

    void display() const {
        cout << celsius << " C" << endl;
    }
};

int main() {
    Temperature t1(30), t2(25);

    if (t1 > t2)
        cout << "First temperature is higher than the second." << endl;
    else if (t1 < t2)
        cout << "First temperature is lower than the second." << endl;
    else
        cout << "Both temperatures are equal." << endl;

    return 0;
}
