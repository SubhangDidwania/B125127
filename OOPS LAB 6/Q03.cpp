#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    Student(string n = "", int m = 0) {
        name = n;
        marks = m;
    }
    
    bool operator>(const Student& s) const {
        return marks > s.marks;
    }

    void display() const {
        cout << name << " : " << marks << endl;
    }
};

int main() {
    Student s1("Alice", 85), s2("Bob", 92);

    if (s1 > s2)
        cout << "Student with higher marks: Alice" << endl;
    else
        cout << "Student with higher marks: Bob" << endl;

    return 0;
}
