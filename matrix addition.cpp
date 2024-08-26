#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    // Allocate memory for the matrices
    int** matrix1 = new int*[rows];
    int** matrix2 = new int*[rows];
    int** result = new int*[rows];

    for (int i = 0; i < rows; i++) {
        matrix1[i] = new int[cols];
        matrix2[i] = new int[cols];
        result[i] = new int[cols];
    }

    // Input values for the first matrix
    cout << "Enter the elements of the first matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    // Input values for the second matrix
    cout << "Enter the elements of the second matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    // Add the matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the resulting matrix
    cout << "Resultant matrix after addition:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory for the matrices
    for (int i = 0; i < rows; i++) {
        delete[] matrix1[i];
        delete[] matrix2[i];
        delete[] result[i];
    }
    delete[] matrix1;
    delete[] matrix2;
    delete[] result;

    return 0;
}

