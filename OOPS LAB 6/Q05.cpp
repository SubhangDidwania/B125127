#include <iostream>
using namespace std;

void updateVisitors(int *count) {
    int newArrivals;
    cout << "Enter the number of new visitors: ";
    cin >> newArrivals;
    *count += newArrivals;
}

int main() {
    int visitorCount = 0;
    cout << "Initial visitor count: " << visitorCount << endl;
    updateVisitors(&visitorCount);
    cout << "Final visitor count: " << visitorCount << endl;
    return 0;
}