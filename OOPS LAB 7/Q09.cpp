#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "Person constructor" << endl;
    }
};

class Employee : public Person {
public:
    Employee() {
        cout << "Employee constructor" << endl;
    }
};

class Manager : public Employee {
private:
    string name;
public:
    Manager(string n){
        cout << "Manager constructor" << endl;
        name = n;
    }
    void display() const {
        cout << "Manager Name: " << name << endl;
    }
};

int main() {
    Manager m("Amit");
    m.display();
    return 0;
}
