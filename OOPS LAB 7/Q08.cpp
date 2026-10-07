#include <iostream>
using namespace std;

class Patient {
protected:
    string patientName;
    int patientID;
    int age;
public:
    Patient(string name, int id, int a) {
        patientName = name;
        patientID = id;
        age = a;
    }
};

class InPatient : public Patient {
private:
    double roomCharges;
    int numberOfDays;
public:
    InPatient(string name, int id, int a, double charges, int days)
        : Patient(name, id, a) {
        roomCharges = charges;
        numberOfDays = days;
    }

    double calculateBill() const {
        return roomCharges * numberOfDays;
    }

    void display() const {
        cout << "Patient Name: " << patientName << endl;
        cout << "Patient ID: " << patientID << endl;
        cout << "Age: " << age << endl;
        cout << "Room Charges per Day: " << roomCharges << endl;
        cout << "Number of Days: " << numberOfDays << endl;
        cout << "Total Hospital Bill: " << calculateBill() << endl;
    }
};

int main() {
    InPatient patient("Riya", 501, 28, 2500, 5);
    patient.display();
    return 0;
}
