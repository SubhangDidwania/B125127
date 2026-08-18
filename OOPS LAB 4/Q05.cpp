#include <iostream>
using namespace std;

class FoodOrder {
private:
    int orderId;
    string foodItem;
    int quantity;
    double price;
public:
    FoodOrder(int id, string item, int qty, double pr){ // Constructor to initialize the FoodOrder object
        orderId = id;
        foodItem = item;
        quantity = qty;
        price = pr;
    }

    friend void calculateBill(FoodOrder order); // Declaring calculateBill as a friend function
};

void calculateBill(FoodOrder order) { // Friend function definition
    double total = order.quantity * order.price;
    cout << "Order ID: " << order.orderId << endl;
    cout << "Food Item: " << order.foodItem << endl;
    cout << "Quantity: " << order.quantity << endl;
    cout << "Price per item: $" << order.price << endl;
    cout << "Total Bill: $" << total << endl;
}

int main() {
    FoodOrder order(101, "Pizza", 2, 12.5); // Creating an object of FoodOrder class
    calculateBill(order);
    return 0;
}