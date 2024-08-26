#include <iostream>
using namespace std;

int main() {
    int n, pos, elem;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n + 1];  

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
    }

    cout << "Enter the position where you want to insert the new element (1-based index): ";
    cin >> pos;

    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position!" << endl;
        return 1;  
    }

    cout << "Enter the element to insert: ";
    cin >> elem;

    
    for (int i = n; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = elem;

    cout << "Array after insertion: ";
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

