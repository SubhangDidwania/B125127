#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    float balance;
public:
    void setAccount(int num, const string &name, float bal) {
        accountNumber = num;
        accountHolder = name;
        balance = (bal >= 0.0f) ? bal : 0.0f;
        if (bal < 0.0f) {
            cout << "Initial balance cannot be negative. Setting balance to 0." << endl;
        }
    }

    void deposit(float amount) {
        if (amount > 0.0f) {
            balance += amount;
            cout << "Deposited " << amount << " successfully." << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void withdraw(float amount) {
        if (amount <= 0.0f) {
            cout << "Withdrawal amount must be positive." << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance." << endl;
        } else {
            balance -= amount;
            cout << "Withdrew " << amount << " successfully." << endl;
        }
    }

    void displayAccount() const {
        cout << "---- Account Details ----" << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int accountNumber;
    string accountHolder;
    float initialBalance;

    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter account holder name: ";
    cin >> accountHolder;
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    account.setAccount(accountNumber, accountHolder, initialBalance);

    int option;
    float amount;
    
    cout << "Enter deposit amount: ";
    cin >> amount;
    account.deposit(amount);

    account.displayAccount();
            
    cout << "Enter withdrawal amount: ";
    cin >> amount;
    account.withdraw(amount);

    account.displayAccount();

    return 0;
}

