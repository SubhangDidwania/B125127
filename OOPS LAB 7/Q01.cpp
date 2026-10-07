#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    double basicSalary;
public:
    Employee(string n, double salary){
        name = n;
        basicSalary = salary;
    }
};

class Developer : public Employee {
protected:
    int experience;
public:
    Developer(string n, double salary, int exp) : Employee(n, salary) {
        experience = exp;
    }
};

class SeniorDeveloper : public Developer {
private:
    double projectBonus;
public:
    SeniorDeveloper(string n, double salary, int exp, double bonus)
        : Developer(n, salary, exp) {
        projectBonus = bonus;
    }

    double calculateFinalSalary() const {
        double experienceBonus = 0.05 * basicSalary * experience;
        return basicSalary + experienceBonus + projectBonus;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Experience: " << experience << " years" << endl;
        cout << "Project Bonus: " << projectBonus << endl;
        cout << "Final Salary: " << calculateFinalSalary() << endl;
    }
};

int main() {
    SeniorDeveloper sd("Alice", 50000, 4, 12000);
    sd.display();
    return 0;
}
