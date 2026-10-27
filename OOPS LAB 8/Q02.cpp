#include <iostream>
using namespace std;

class ParkingSlot {
public:
    virtual double calculateFee(int hours) const = 0;
};

class TwoWheelerSlot : public ParkingSlot {
public:
    double calculateFee(int hours) const override {
        double fee = hours * 10.0;
        if (hours > 5) fee *= 0.9;
        return fee;
    }
};

class FourWheelerSlot : public ParkingSlot {
public:
    double calculateFee(int hours) const override {
        double fee = hours * 30.0;
        if (hours > 5) fee *= 0.9;
        return fee;
    }
};

int main() {
    TwoWheelerSlot twoWheeler;
    FourWheelerSlot fourWheeler;

    int hours = 7;

    cout << "Two-wheeler parking fee for " << hours << " hours: Rs. "
         << twoWheeler.calculateFee(hours) << endl;
    cout << "Four-wheeler parking fee for " << hours << " hours: Rs. "
         << fourWheeler.calculateFee(hours) << endl;

    return 0;
}
