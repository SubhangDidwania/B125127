#include <iostream>
using namespace std;

class IrrigationSystem {
public:
    virtual double calculateWater(double moisture) const = 0;
};

class DripIrrigation : public IrrigationSystem {
public:
    double calculateWater(double moisture) const override {
        return 2.0 * (100.0 - moisture);
    }
};

class SprinklerIrrigation : public IrrigationSystem {
public:
    double calculateWater(double moisture) const override {
        return 3.0 * (100.0 - moisture);
    }
};

int main() {
    double moisture = 40.0;

    DripIrrigation drip;
    SprinklerIrrigation sprinkler;

    cout << "Soil moisture: " << moisture << "%" << endl;
    cout << "Water needed for drip irrigation: " << drip.calculateWater(moisture) << " litres" << endl;
    cout << "Water needed for sprinkler irrigation: " << sprinkler.calculateWater(moisture) << " litres" << endl;

    return 0;
}
