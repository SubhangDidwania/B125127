#include <iostream>
using namespace std;

class Vehicle {
protected:
    string registrationNo;
    int rentalDays;
public:
    Vehicle(string reg, int days) {
        registrationNo = reg;
        rentalDays = days;
    }
};

class Car : public Vehicle {
protected:
    double dailyRate;
public:
    Car(string reg, int days, double rate) : Vehicle(reg, days) {
        dailyRate = rate;
    }
};

class LuxuryCar : public Car {
private:
    double luxuryCharge;
public:
    LuxuryCar(string reg, int days, double rate, double charge)
        : Car(reg, days, rate){
        luxuryCharge = charge;
        }

    double totalCost() const {
        return (dailyRate + luxuryCharge) * rentalDays;
    }

    void display() const {
        cout << "Registration No: " << registrationNo << endl;
        cout << "Rental Days: " << rentalDays << endl;
        cout << "Daily Rate: " << dailyRate << endl;
        cout << "Luxury Charge: " << luxuryCharge << endl;
        cout << "Total Rental Cost: " << totalCost() << endl;
    }
};

int main() {
    LuxuryCar car("OD-12-AB-3456", 5, 1500, 500);
    car.display();
    return 0;
}
