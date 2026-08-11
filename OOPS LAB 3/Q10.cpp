#include <iostream>
#include <string>
using namespace std;

class Employee { // Class to represent an employee and their salary details
private:
    int employeeID;
    string employeeName;
    float basicSalary;
    float *monthlyEarnings;
    int numberOfMonths;

public:
    Employee() { // Constructor to initialize the monthlyEarnings pointer to nullptr
        monthlyEarnings = nullptr;
    }

    void accept() { // Function to accept employee details and monthly earnings from user
        cout << "Enter employee ID: ";
        cin >> employeeID;

        cout << "Enter employee name: ";
        cin >> employeeName;

        cout << "Enter basic salary: ";
        cin >> basicSalary;

        cout << "Enter number of months: ";
        cin >> numberOfMonths;

        monthlyEarnings = new float[numberOfMonths]; // Dynamically allocate an array to store monthly earnings

        cout << "Enter monthly earnings:\n";

        for (int i = 0; i < numberOfMonths; i++) { // Loop to accept monthly earnings for each month
            cout << "Month " << i + 1 << ": ";
            cin >> monthlyEarnings[i];
        }
    }

    void display() { // Function to display employee salary details
        float total = 0;
        int highestMonth = 0;

        for (int i = 0; i < numberOfMonths; i++) {
            total += monthlyEarnings[i];

            if (monthlyEarnings[i] > monthlyEarnings[highestMonth]) {
                highestMonth = i;
            }
        }

        float average = total / numberOfMonths;

        cout << "\n--- Employee Salary Analysis ---\n";
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;

        cout << "\nMonthly Earnings:\n";

        for (int i = 0; i < numberOfMonths; i++) {
            cout << "Month " << i + 1 << ": "
                 << monthlyEarnings[i] << endl;
        }

        cout << "\nTotal Earnings: " << total << endl;
        cout << "Average Monthly Earning: " << average << endl;

        cout << "Highest Earning: "
             << monthlyEarnings[highestMonth] << endl;

        cout << "Highest Earning Month: "
             << highestMonth + 1 << endl;
    }

    ~Employee() { // Destructor to deallocate the dynamically allocated memory for monthly earnings
        delete[] monthlyEarnings;
    }
};

int main() { // Main function to manage employee salary details
    Employee employee;

    employee.accept();
    employee.display();

    return 0;
}