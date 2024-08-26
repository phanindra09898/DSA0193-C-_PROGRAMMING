#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, sum = 0, n = 0;
    
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, n);
        originalNum /= 10;
    }

    if (sum == num) {
        cout << num << " is a Narcissistic number." << endl;
    } else {
        cout << num << " is not a Narcissistic number." << endl;
    }

    return 0;
}

