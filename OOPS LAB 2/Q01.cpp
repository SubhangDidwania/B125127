#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int roll;
    string name;
    int marks;

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main(){
    Student s1;
    cout << "Enter roll number: ";
    cin >> s1.roll;
    cout << "Enter name: ";
    cin >> s1.name;
    cout << "Enter marks: ";
    cin >> s1.marks;
    cout << "Student Information:" << endl;
    s1.displayInfo();
}