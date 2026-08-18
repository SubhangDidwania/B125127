#include <iostream>
using namespace std;

class ParkingSlot {
    int slot;
    string vehicle;
    bool occupied;

public:
    ParkingSlot(int s = 0, string v = "", bool o = false) {
        slot = s;
        vehicle = v;
        occupied = o;
    }

    friend void checkSlot(const ParkingSlot& p);
};

void checkSlot(const ParkingSlot& p) {
    cout << "Slot Number: " << p.slot << endl;

    if (p.occupied) {
        cout << "Status: Occupied" << endl;
        cout << "Vehicle Number: " << p.vehicle << endl;
    } else {
        cout << "Status: Available" << endl;
    }
    cout << "---------------------" << endl;
}

int main() {
    int totalSlots;

    cout << "Enter total number of parking slots: ";
    cin >> totalSlots;

    ParkingSlot *parkingSlots = new ParkingSlot[totalSlots];

    for (int i = 0; i < totalSlots; i++) {
        int slotNumber;
        string vehicleNumber;
        bool occupied;

        cout << "\nEnter details for Slot " << (i + 1) << endl;
        cout << "Slot number: ";
        cin >> slotNumber;

        cout << "Is the slot occupied? (1 for Yes / 0 for No): ";
        cin >> occupied;

        if (occupied) {
            cout << "Enter vehicle number: ";
            cin >> vehicleNumber;
        } else {
            vehicleNumber = "";
        }

        parkingSlots[i] = ParkingSlot(slotNumber, vehicleNumber, occupied);
    }

    cout << "\nParking Slot Status" << endl;
    for (int i = 0; i < totalSlots; i++) {
        checkSlot(parkingSlots[i]);
    }

    delete[] parkingSlots;
    return 0;
}