#include <iostream>
using namespace std;

int main() {
    int n, pos;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array cannot be empty!" << endl;
        return 1; 
    }

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    cout << "Enter the position of the element to delete (1-based index): ";
    cin >> pos;


    if (pos < 1 || pos > n) {
        cout << "Invalid position!" << endl;
        return 1; 
    }

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

