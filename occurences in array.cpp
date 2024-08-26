#include <iostream>
using namespace std;

int main() {
    int n, value, count = 0;

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

    cout << "Enter the value to count occurrences: ";
    cin >> value;

    
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            count++;
        }
    }


    cout << "The value " << value << " occurs " << count << " times in the array." << endl;

    return 0;
}

