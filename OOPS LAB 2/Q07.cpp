#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    int quantityAvailable;
    double pricePerUnit;

public:
    void inputDetails() {
        cout << "Enter Product ID: ";
        cin >> productID;
        cout << "Enter Product Name: ";
        cin >> productName;
        cout << "Enter Quantity Available: ";
        cin >> quantityAvailable;
        cout << "Enter Price per Unit: ";
        cin >> pricePerUnit;
    }

    void displayDetails() {
        cout << "\n----- Product Details -----" << endl;
        cout << "Product ID : " << productID << endl;
        cout << "Product Name : " << productName << endl;
        cout << "Quantity : " << quantityAvailable << endl;
        cout << "Price/Unit : " << pricePerUnit << endl;
    }

    void sellUnits(int unitsSold) {
        if (unitsSold > quantityAvailable) {
            cout << "Error! Quantity sold exceeds available stock." << endl;
        } else {
            quantityAvailable -= unitsSold;
            cout << unitsSold << " units sold. Remaining Quantity: " << quantityAvailable << endl;
        }
    }

    void displayInventoryValue() {
        double inventoryValue = quantityAvailable * pricePerUnit;
        cout << "Total Inventory Value: " << inventoryValue << endl;
    }
};

int main() {
    Product p1;
    int unitsSold;

    p1.inputDetails();
    p1.displayDetails();

    cout << "\nEnter units sold: ";
    cin >> unitsSold;
    p1.sellUnits(unitsSold);

    p1.displayInventoryValue();
    return 0;
}