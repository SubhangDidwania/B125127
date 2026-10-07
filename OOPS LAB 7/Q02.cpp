#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;
public:
    Student(string n, int r) {
        name = n;
        rollNo = r;
    }
    virtual double calculateResult() const = 0; 
};

class RegularStudent : public Student {
private:
    double totalMarks;
public:
    RegularStudent(string n, int r, double marks) : Student(n, r) {
        totalMarks = marks;
    }
    double calculateResult() const override {
        return totalMarks;
    }
    void display() const {
        cout << "Regular Student\n";
        cout << "Name: " << name << "\nRoll No: " << rollNo << endl;
        cout << "Total Marks: " << calculateResult() << endl;
    }
};

class ScholarshipStudent : public Student {
private:
    double totalMarks;
public:
    ScholarshipStudent(string n, int r, double marks) : Student(n, r) {
        totalMarks = marks;
    }
    double calculateResult() const override {
        return totalMarks + 5;
    }
    void display() const {
        cout << "Scholarship Student\n";
        cout << "Name: " << name << "\nRoll No: " << rollNo << endl;
        cout << "Final Result: " << calculateResult() << endl;
    }
};

int main() {
    RegularStudent rs("Bob", 101, 430);
    ScholarshipStudent ss("Charlie", 102, 430);

    rs.display();
    ss.display();
    return 0;
}
