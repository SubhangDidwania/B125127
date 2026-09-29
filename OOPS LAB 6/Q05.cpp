#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    Time operator+(const Time& t) const {
        int totalMinutes = (hours * 60 + minutes) + (t.hours * 60 + t.minutes);
        int resultHours = totalMinutes / 60;
        int resultMinutes = totalMinutes % 60;
        return Time(resultHours, resultMinutes);
    }

    void display() const {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
};

int main() {
    Time t1(2, 56), t2(8, 39);
    Time t3 = t1 + t2;

    cout << "Time 1: ";
    t1.display();
    cout << "Time 2: ";
    t2.display();
    cout << "Result: ";
    t3.display();

    return 0;
}
