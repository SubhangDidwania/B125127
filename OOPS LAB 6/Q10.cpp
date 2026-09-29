#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    Product(string n = "", double p = 0.0, int q = 0) {
        name = n;
        price = p;
        quantity = q;
    }

    Product operator+(const Product& p) const {
        if (name == p.name && price == p.price)
            return Product(name, price, quantity + p.quantity);
        else {
            cout << "Products are different. Cannot combine." << endl;
            return Product(name, price, quantity);
        }
    }

    bool operator>(const Product& p) const {
        return (price * quantity) > (p.price * p.quantity);
    }

    void display() const {
        cout << "Product: " << name << ", Price: " << price
             << ", Quantity: " << quantity << ", Total Value: "
             << price * quantity << endl;
    }
};

int main() {
    Product p1("Book", 50, 2);
    Product p2("Book", 50, 3);

    Product p3 = p1 + p2;

    cout << "Product 1:" << endl;
    p1.display();
    cout << "Product 2:" << endl;
    p2.display();
    cout << "Combined Product:" << endl;
    p3.display();

    if (p1 > p2)
        cout << "Product 1 has higher total value." << endl;
    else if (p2 > p1)
        cout << "Product 2 has higher total value." << endl;
    else
        cout << "Both products have equal total value." << endl;

    return 0;
}
