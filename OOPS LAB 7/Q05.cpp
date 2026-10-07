#include <iostream>
using namespace std;

class Academic {
protected:
    double sub1, sub2, sub3;
public:
    Academic(double a, double b, double c) {
        sub1 = a;
        sub2 = b;
        sub3 = c;
    }
};

class Sports {
protected:
    double sportsMarks;
public:
    Sports(double s) {
        sportsMarks = s;
    }
};

class StudentResult : public Academic, public Sports {
public:
    StudentResult(double a, double b, double c, double s)
        : Academic(a, b, c), Sports(s) {}

    double totalMarks() const {
        return sub1 + sub2 + sub3 + sportsMarks;
    }

    double averageMarks() const {
        return totalMarks() / 4;
    }

    void display() const {
        cout << "Academic Marks: " << sub1 + sub2 + sub3 << endl;
        cout << "Sports Marks: " << sportsMarks << endl;
        cout << "Total: " << totalMarks() << endl;
        cout << "Average: " << averageMarks() << endl;
    }
};

int main() {
    StudentResult sr(78, 85, 90, 88);
    sr.display();
    return 0;
}
