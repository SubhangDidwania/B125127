#include <iostream>
#include <string>
using namespace std;

class Student { // Class to represent a student and their marks
private:
    int rollNumber;
    string name;
    float marks;

public:
    void accept() { // Function to accept student details from user
        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() { // Function to display student details
        cout << "\nStudent Details\n";
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() { // Main function to manage student details
    Student *student = new Student;

    student->accept();
    student->display();

    delete student;

    return 0;
}