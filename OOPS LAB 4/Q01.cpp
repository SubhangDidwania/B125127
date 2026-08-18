#include <iostream>
using namespace std;

class Diary {
    string owner, lastEntry;
    int entries;

public:
    Diary(string o, int e, string l) { // Constructor to initialize the Diary object
        owner = o;
        entries = e;
        lastEntry = l;
    }

    friend void displayDiary(Diary d); //Declaring displayDiary as a friend function
};

void displayDiary(Diary d) { // Friend function definition 
    cout << "Owner Name: " << d.owner << endl;
    cout << "Number of Entries: " << d.entries << endl;
    cout << "Last Entry: " << d.lastEntry << endl;
}

int main() {
    Diary d("Subhang", 15, "Completed OOP Lab"); // Creating an object of Diary class
    displayDiary(d);
    return 0;
}