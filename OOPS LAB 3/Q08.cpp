#include <iostream>
#include <string>
using namespace std;

class Student { // Class to represent a student and their marks in multiple subjects
private:
    int rollNumber;
    string name;
    int numberOfSubjects;
    float *marks;

public:
    Student() { // Constructor to initialize the marks pointer to nullptr
        marks = nullptr;
    }

    void accept() { // Function to accept student details and marks from user
        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter number of subjects: ";
        cin >> numberOfSubjects;

        marks = new float[numberOfSubjects]; // Dynamically allocate an array to store marks for each subject

        cout << "Enter marks for " << numberOfSubjects << " subjects:\n";

        for (int i = 0; i < numberOfSubjects; i++) { // Loop to accept marks for each subject
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void display() { // Function to display student details and calculate total and average marks
        float total = 0;

        for (int i = 0; i < numberOfSubjects; i++) { 
            total += marks[i];
        }

        float average = total / numberOfSubjects;

        cout << "\n--- Student Result ---\n";
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Number of Subjects: " << numberOfSubjects << endl;

        cout << "Marks: ";
        for (int i = 0; i < numberOfSubjects; i++) {
            cout << marks[i] << " ";
        }

        cout << "\nTotal Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
    }

    ~Student() { // Destructor to deallocate the dynamically allocated memory for marks
        delete[] marks;
    }
};

int main() {
    Student student;

    student.accept();
    student.display();

    return 0;
}