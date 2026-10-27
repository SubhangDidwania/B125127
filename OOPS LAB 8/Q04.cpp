#include <iostream>
#include <cmath>
using namespace std;

class Delivery {
public:
    virtual double estimateTime(double distance) const = 0;
};

class BikeDelivery : public Delivery {
public:
    double estimateTime(double distance) const override {
        double timeHours = distance / 20.0;
        return (timeHours * 60.0) + 5.0;
    }
};

class DroneDelivery : public Delivery {
public:
    double estimateTime(double distance) const override {
        double timeHours = distance / 40.0;
        return (timeHours * 60.0) + 2.0;
    }
};

int main() {
    double distance = 30.0;

    BikeDelivery bike;
    DroneDelivery drone;

    cout << "Distance: " << distance << " km" << endl;
    cout << "Bike delivery time: " << bike.estimateTime(distance) << " minutes" << endl;
    cout << "Drone delivery time: " << drone.estimateTime(distance) << " minutes" << endl;

    return 0;
}
