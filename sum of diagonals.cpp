#include <iostream>
using namespace std;

void inputMatrix(int** matrix, int rows, int cols) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

int sumPrimaryDiagonal(int** matrix, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

int sumSecondaryDiagonal(int** matrix, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][size - 1 - i];
    }
    return sum;
}

void deallocateMatrix(int** matrix, int size) {
    for (int i = 0; i < size; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    int size;

    cout << "Enter the number of rows/columns for the square matrix: ";
    cin >> size;

    int** matrix = new int*[size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
    }

    inputMatrix(matrix, size, size);

    int primaryDiagonalSum = sumPrimaryDiagonal(matrix, size);
    int secondaryDiagonalSum = sumSecondaryDiagonal(matrix, size);

    cout << "Sum of the primary diagonal: " << primaryDiagonalSum << endl;
    cout << "Sum of the secondary diagonal: " << secondaryDiagonalSum << endl;

    deallocateMatrix(matrix, size);

    return 0;
}

