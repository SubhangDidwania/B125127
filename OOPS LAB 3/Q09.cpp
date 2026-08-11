#include <iostream>
#include <string>
using namespace std;

class Product { // Class to represent a product in the shopping cart
private:
    int productID;
    string productName;
    float price;
    int quantity;

public:
    void accept() { // Function to accept product details from user
        cout << "Enter product ID: ";
        cin >> productID;

        cout << "Enter product name: ";
        cin >> productName;

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter quantity: ";
        cin >> quantity;
    }

    void display() { // Function to display product details
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Cost: " << price * quantity << endl;
    }

    float getCost() { // Function to calculate and return the total cost of the product
        return price * quantity;
    }
};

int main() { // Main function to manage the shopping cart
    int n;
    float total = 0;

    cout << "Enter number of products: ";
    cin >> n;

    Product *cart = new Product[n]; // Dynamically allocate an array of Product objects

    cout << "\nEnter product details:\n";

    for (int i = 0; i < n; i++) {
        cout << "\nProduct " << i + 1 << endl;
        cart[i].accept();
    }

    cout << "\n--- Shopping Cart ---\n";

    for (int i = 0; i < n; i++) { // Display each product's details and calculate the total cost
        cout << "\nProduct " << i + 1 << endl;
        cart[i].display();

        total += cart[i].getCost();
    }

    cout << "\nTotal Cart Amount = " << total << endl;

    delete[] cart; // Deallocate the dynamically allocated array of Product objects

    return 0;
}