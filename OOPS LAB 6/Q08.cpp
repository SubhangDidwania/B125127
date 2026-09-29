#include <iostream>
#include <string>
using namespace std;

class Item {
private:
    string name;
    double price;
    int quantity;

public:
    Item(string n = "", double p = 0.0, int q = 0) {
        name = n;
        price = p;
        quantity = q;
    }

    Item operator+(const Item& i) const {
        if (name == i.name && price == i.price) {
            return Item(name, price, quantity + i.quantity);
        } else {
            cout << "Different item or different price. Cannot combine." << endl;
            return Item(name, price, quantity);
        }
    }

    void display() const {
        cout << "Item: " << name << ", Price: " << price
             << ", Quantity: " << quantity << endl;
    }
};

int main() {
    Item a("Pen", 10.0, 5), b("Pen", 10.0, 7);

    Item c = a + b;

    cout << "Item A:" << endl;
    a.display();
    cout << "Item B:" << endl;
    b.display();
    cout << "Combined Item:" << endl;
    c.display();

    return 0;
}
