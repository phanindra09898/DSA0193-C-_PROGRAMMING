#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0, average;

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

    average = sum / n;

    
    cout << "Average of all elements: " << average << endl;

    return 0;
}

