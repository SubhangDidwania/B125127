#include <iostream>
using namespace std;

int main() { // Main function to manage a 2D matrix
    int m, n;

    cout << "Enter number of rows: ";
    cin >> m;

    cout << "Enter number of columns: ";
    cin >> n;

    int **matrix = new int*[m]; // Dynamically allocate an array of pointers for rows

    for (int i = 0; i < m; i++) {
        matrix[i] = new int[n]; // Dynamically allocate an array for each row
    }

    cout << "Enter matrix elements:\n";

    for (int i = 0; i < m; i++) { // Loop to accept elements for each row
        for (int j = 0; j < n; j++) { // Loop to accept elements for each column
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix:\n";

    for (int i = 0; i < m; i++) { // Loop to display each row of the matrix
        for (int j = 0; j < n; j++) { // Loop to display each column of the matrix
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++) {
        delete[] matrix[i]; // Deallocate the memory for each row
    }

    delete[] matrix; // Deallocate the memory for the array of pointers

    return 0;
}