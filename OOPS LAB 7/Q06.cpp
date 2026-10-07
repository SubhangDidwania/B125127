#include <iostream>
using namespace std;

class InternalExam {
public:
    InternalExam() = default;
    void display() {
        cout << "Display from InternalExam" << endl;
    }
};

class ExternalExam {
public:
    ExternalExam() = default;
    void display() {
        cout << "Display from ExternalExam" << endl;
    }
};

class FinalResult : public InternalExam, public ExternalExam {
public:
    void showInternal() {
        InternalExam::display();
    }
    void showExternal() {
        ExternalExam::display();
    }
};

int main() {
    FinalResult fr;
    fr.showInternal();
    fr.showExternal();
    return 0;
}
