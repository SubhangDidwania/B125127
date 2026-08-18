#include <iostream>
using namespace std;

class Door {
    int number;
    bool locked;

public:
    Door(int n, bool l) { // Constructor to initialize the Door object
        number = n;
        locked = l;
    }

    friend class SecuritySystem; // Declaring SecuritySystem as a friend class
};

class SecuritySystem { // Friend class definition
public:
    void checkLock(Door d) { // Function to check the lock status of the door
        cout << "Door Number: " << d.number << endl;

        if (d.locked)
            cout << "Status: Locked" << endl;
        else
            cout << "Status: Unlocked" << endl;
    }
};

int main() {
    Door d(101, true); // Creating an object of Door class
    SecuritySystem s; // Creating an object of SecuritySystem class

    s.checkLock(d); // Calling the checkLock function to display the lock status of the door
    return 0;
}