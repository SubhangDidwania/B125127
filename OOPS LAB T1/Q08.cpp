#include <iostream>
using namespace std;

void adjustScores(int *scores, int n) {
    for (int i = 0; i < n; i++) {
        *(scores + i) += 10;
    }
}

int main() {
    int n;
    cout << "Enter number of players: ";
    cin >> n;

    int *scores = new int[n];

    cout << "Enter " << n << " scores:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(scores + i);
    }

    cout << "\nScores before update: ";
    for (int i = 0; i < n; i++) {
        cout << *(scores + i) << " ";
    }
    cout << endl;

    adjustScores(scores, n);

    cout << "Scores after update: ";
    for (int i = 0; i < n; i++) {
        cout << *(scores + i) << " ";
    }
    cout << endl;

    delete[] scores;
    return 0;
}