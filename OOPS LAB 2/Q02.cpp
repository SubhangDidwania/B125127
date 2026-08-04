#include <iostream>
#include <string>
using namespace std;

class Rectangle {
    private:
        double length;
        double breadth;
    public:
        void setLength(double l) { 
            length = l;
        }
        void setBreadth(double w) {
            breadth = w;
        }
        double getArea() {
            return length * breadth;
        }

        double perimeter() {
            return 2 * (length + breadth);
        }
};

int main() {
    Rectangle rect;
    double length, breadth;

    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    rect.setLength(length);
    rect.setBreadth(breadth);

    cout << "Area of rectangle: " << rect.getArea() << endl;
    cout << "Perimeter of rectangle: " << rect.perimeter() << endl;

    return 0;
}