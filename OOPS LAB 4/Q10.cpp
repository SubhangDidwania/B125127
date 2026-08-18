#include <iostream>
using namespace std;

class SmartDevice {
private:
    string deviceName, deviceType;
    bool powerStatus;
public:
    SmartDevice(string name, string type, bool status) { // Constructor to initialize the SmartDevice object
        deviceName = name;
        deviceType = type;
        powerStatus = status;
    }

    friend class HomeController; // Declaring HomeController as a friend class
};

class HomeController { // Friend class definition
public:
    void controlDevice(SmartDevice& device) { // Function to control the smart device
        cout << "-----------------------------" << endl;
        cout << "Controlling device: " << device.deviceName << endl;
        cout << "Device type: " << device.deviceType << endl;
        cout << "Power status: " << (device.powerStatus ? "On" : "Off") << endl;
        cout << "-----------------------------" << endl;
    }

    void turnOnDevice(SmartDevice& device) { // Function to turn on the smart device
        device.powerStatus = true;
        cout << device.deviceName << " is now turned on." << endl;
    }

    void turnOffDevice(SmartDevice& device) { // Function to turn off the smart device
        device.powerStatus = false;
        cout << device.deviceName << " is now turned off." << endl;
    }
};

int main() {
    SmartDevice device("Living Room Light", "Light", false);
    HomeController controller;

    controller.controlDevice(device);
    controller.turnOnDevice(device);
    controller.controlDevice(device);
    controller.turnOffDevice(device);
    controller.controlDevice(device);

    return 0;
}