#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0) {
        value = v;
    }

    void display() const {
        cout << "Value: " << value << endl;
    }

    Counter& operator++() { // Prefix increment
        ++value; 
        return *this; 
    }

    Counter operator++(int) { // Postfix increment
        Counter temp = *this; 
        ++value; 
        return temp;
    }
};

int main() {
    Counter c(5);

    cout << "Before prefix increment: ";
    c.display();
    ++c;
    cout << "After prefix increment: ";
    c.display();

    cout << "Before postfix increment: ";
    c.display();
    c++;
    cout << "After postfix increment: ";
    c.display();

    return 0;
}
