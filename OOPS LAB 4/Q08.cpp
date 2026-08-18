#include <iostream>
using namespace std;

class TrainSeat { 
private:
    int seatNumber;
    string passengerName;
    bool isBooked;
public:
    TrainSeat(int number, string name, bool booked) { // Constructor to initialize the TrainSeat object
        seatNumber = number;
        passengerName = name;
        isBooked = booked;
    }

    friend class TicketChecker; // Declaring TicketChecker as a friend class
};

class TicketChecker { // Friend class definition
public:
    void checkSeat(TrainSeat seat) { // Function to check the booking status of the train seat
        cout << "Checking seat number: " << seat.seatNumber << endl;
        if (seat.isBooked) {
            cout << "Seat " << seat.seatNumber << " is booked by " << seat.passengerName << "." << endl;
        } else {
            cout << "Seat " << seat.seatNumber << " is available." << endl;
        }
    }
    
};

int main() {
    TrainSeat seat(5, "Subhang", true); // Creating an object of TrainSeat class
    TicketChecker checker;
    checker.checkSeat(seat); // Calling the checkSeat function to display the booking status of the train seat
    return 0;
}