#include <iostream>
using namespace std;

class Exam {
private:
    string studentName, subject;
    int marks, maximumMarks;
public:
    Exam(string name, string sub, int m, int maxM){ // Constructor to initialize the Exam object
        studentName = name;
        subject = sub;
        marks = m;
        maximumMarks = maxM;
    }

    friend class Result; // Declaring Result as a friend class
};

class Result { // Friend class definition
public:
    void calculatePercentage(Exam e) { // Friend class function definition
        float percentage = (float)e.marks / e.maximumMarks * 100;
        if (percentage >= 40) {
            cout << "Result: Pass" << endl;
        } else {
            cout << "Result: Fail" << endl;
        }
        cout << "Student: " << e.studentName << endl;
        cout << "Subject: " << e.subject << endl;
        cout << "Marks: " << e.marks << "/" << e.maximumMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Exam exam("Subhang", "Mathematics", 75, 100); // Creating an object of Exam class
    Result result;
    result.calculatePercentage(exam); // Calling the calculatePercentage function to display the result of the exam
    return 0;
}