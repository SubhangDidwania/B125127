#include <iostream>
#include <string>
using namespace std;

class StudentResult {
private:
    string studentName;
    int rollNumber;
    float marks[5];
    float totalMarks, percentage;
    char grade;

public:
    void inputDetails() {
        cout << "Enter Student Name: ";
        cin >> studentName;
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        for (int i = 0; i < 5; i++) {
            cout << "Enter marks in Subject " << (i + 1) << " (out of 100): ";
            cin >> marks[i];
        }
    }

    void calculateResult() {
        totalMarks = 0;
        for (int i = 0; i < 5; i++)
            totalMarks += marks[i];

        percentage = (totalMarks / 500) * 100;

        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 70)
            grade = 'C';
        else if (percentage >= 60)
            grade = 'D';
        else
            grade = 'F';
    }

    void displayResult() {
        cout << "\n----- Student Result -----" << endl;
        cout << "Name : " << studentName << endl;
        cout << "Roll Number : " << rollNumber << endl;
        cout << "Total Marks : " << totalMarks << " / 500" << endl;
        cout << "Percentage : " << percentage << "%" << endl;
        cout << "Grade : " << grade << endl;
    }
};

int main() {
    StudentResult s1;
    s1.inputDetails();
    s1.calculateResult();
    s1.displayResult();
    return 0;
}