#include <iostream>
#include <string>
using namespace std;

class Employee { // Class to represent an employee and their salary details
private:
    int employeeID;
    string employeeName;
    float salary;

public:
    void accept() { // Function to accept employee details from user
        cout << "Enter employee ID: ";
        cin >> employeeID;

        cout << "Enter employee name: ";
        cin >> employeeName;

        cout << "Enter salary: ";
        cin >> salary;
    }

    void display() { // Function to display employee details
        cout << "\nEmployee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() { // Main function to manage employee details
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee *employees = new Employee[n]; // Dynamically allocate an array of Employee objects

    cout << "\nEnter employee details:\n";

    for (int i = 0; i < n; i++) { 
        cout << "\nEmployee " << i + 1 << endl;
        employees[i].accept();
    }

    cout << "\n--- Employee Details ---\n";

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        employees[i].display();
        cout << "------------------------\n";
    }

    delete[] employees; // Deallocate the memory for the array of Employee objects

    return 0;
}