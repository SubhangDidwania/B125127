#include <iostream>
using namespace std;

class CloudResource {
public:
    virtual double calculateCost(double cpuHours) const = 0;
};

class StandardInstance : public CloudResource {
public:
    double calculateCost(double cpuHours) const override {
        double cost = cpuHours * 5.0;
        if (cpuHours > 100) cost *= 0.85;
        return cost;
    }
};

class PremiumInstance : public CloudResource {
public:
    double calculateCost(double cpuHours) const override {
        double cost = cpuHours * 12.0;
        if (cpuHours > 100) cost *= 0.85;
        return cost;
    }
};

int main() {
    double cpuHours = 120.0;

    StandardInstance standard;
    PremiumInstance premium;

    cout << "CPU hours used: " << cpuHours << endl;
    cout << "Standard instance cost: Rs. " << standard.calculateCost(cpuHours) << endl;
    cout << "Premium instance cost: Rs. " << premium.calculateCost(cpuHours) << endl;

    return 0;
}
