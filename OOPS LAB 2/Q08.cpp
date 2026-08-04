#include <iostream>
#include <string>
using namespace std;

class LibraryBook {
private:
    int bookID;
    string bookTitle;
    string studentName;
    int daysIssued;
    double fine;

public:
    void inputDetails() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cout << "Enter Book Title: ";
        cin >> bookTitle;
        cout << "Enter Student Name: ";
        cin >> studentName;
        cout << "Enter Number of Days Issued: ";
        cin >> daysIssued;
    }

    void calculateFine() {
        if (daysIssued > 15)
            fine = (daysIssued - 15) * 2;
        else
            fine = 0;
    }

    void displayDetails() {
        cout << "\n----- Library Transaction Details -----" << endl;
        cout << "Book ID : " << bookID << endl;
        cout << "Book Title : " << bookTitle << endl;
        cout << "Student Name : " << studentName << endl;
        cout << "Days Issued : " << daysIssued << endl;
        cout << "Fine Amount : Rs " << fine << endl;
    }
};

int main() {
    LibraryBook book1;
    book1.inputDetails();
    book1.calculateFine();
    book1.displayDetails();
    return 0;
}