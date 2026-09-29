#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    Date(int d = 1, int m = 1, int y = 2000) {
        day = d;
        month = m;
        year = y;
    }

    bool operator==(const Date& d) const {
        return (day == d.day && month == d.month && year == d.year);
    }

    void display() const {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d1(15, 8, 2026), d2(15, 8, 2026);

    if (d1 == d2)
        cout << "Both dates are equal." << endl;
    else
        cout << "Dates are not equal." << endl;

    return 0;
}
