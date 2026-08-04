#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empID;
    string empName;
    double basicSalary;
    double hra, da, grossSalary;

public:
    void inputDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin >> empName;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void calculateSalary() {
        hra = 0.20 * basicSalary;
        da = 0.10 * basicSalary;
        grossSalary = basicSalary + hra + da;
    }

    void displayDetails() {
        cout << "\n----- Salary Details -----" << endl;
        cout << "Employee ID : " << empID << endl;
        cout << "Employee Name : " << empName << endl;
        cout << "Basic Salary : " << basicSalary << endl;
        cout << "HRA : " << hra << endl;
        cout << "DA : " << da << endl;
        cout << "Gross Salary : " << grossSalary << endl;
    }
};

int main() {
    Employee e1;
    e1.inputDetails();
    e1.calculateSalary();
    e1.displayDetails();
    return 0;
}