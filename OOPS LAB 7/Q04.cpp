#include <iostream>
using namespace std;

class BankAccount {
protected:
    int accountNo;
    double balance;
public:
    BankAccount(int no, double bal) {
        accountNo = no;
        balance = bal;
    }
    virtual void display() const = 0;
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;
public:
    SavingsAccount(int no, double bal, double rate) : BankAccount(no, bal) {
        interestRate = rate;
    }
    void applyInterest() {
        balance += balance * interestRate / 100;
    }
    void display() const override {
        cout << "Savings Account\nAccount No: " << accountNo << "\nBalance: " << balance << endl;
    }
};

class CurrentAccount : public BankAccount {
private:
    double minimumBalance;
    double maintenanceCharge;
public:
    CurrentAccount(int no, double bal, double minBal, double charge)
        : BankAccount(no, bal) {
        minimumBalance = minBal;
        maintenanceCharge = charge;
    }
    void applyMaintenance() {
        if (balance < minimumBalance) {
            balance -= maintenanceCharge;
        }
    }
    void display() const override {
        cout << "Current Account\nAccount No: " << accountNo << "\nBalance: " << balance << endl;
    }
};

int main() {
    SavingsAccount sa(101, 5000, 5.5);
    sa.applyInterest();
    sa.display();

    CurrentAccount ca(202, 900, 1000, 100);
    ca.applyMaintenance();
    ca.display();
    return 0;
}
