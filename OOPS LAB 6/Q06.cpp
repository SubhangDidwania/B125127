#include <iostream>
using namespace std;

void findHighestPrice(const double *prices, int n) {
    const double *ptr = prices;
    double max = *ptr;

    for (int i = 0; i < n; i++) {
        if (*ptr > max) {
            max = *ptr;
        }
        ptr++;
    }

    cout << "Highest Product Price: " << max << endl;
}

int main() {
    double prices[7] = {12.5, 45.0, 8.97, 93.43, 23.4, 67.8, 19.431};

    findHighestPrice(prices, 7);

    return 0;
}