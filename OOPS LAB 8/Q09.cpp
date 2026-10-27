#include <iostream>
using namespace std;

class Robot {
public:
    virtual double move(double distance) const = 0;
};

class WheeledRobot : public Robot {
public:
    double move(double distance) const override {
        return distance / 2.0;
    }
};

class TrackedRobot : public Robot {
public:
    double move(double distance) const override {
        return distance / 1.2;
    }
};

int main() {
    double distance = 50.0;
    Robot* robot1 = new WheeledRobot();
    Robot* robot2 = new TrackedRobot();

    cout << "Distance: " << distance << " m" << endl;
    cout << "Wheeled robot travel time: " << robot1->move(distance) << " seconds" << endl;
    cout << "Tracked robot travel time: " << robot2->move(distance) << " seconds" << endl;

    delete robot1;
    delete robot2;

    return 0;
}
