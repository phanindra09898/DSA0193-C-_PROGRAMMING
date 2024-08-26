#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

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

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    
    cout << "Sum of all elements: " << sum << endl;

    return 0;
}

