#include <iostream>
using namespace std;

int main() {
    int num, originalNum, digit, sum = 0;
    
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    // Calculate factorial of a number
    while (num > 0) {
        digit = num % 10;
        
        int factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }

        sum += factorial;
        num /= 10;
    }

    // Check if the sum of the factorials of the digits is equal to the original number
    if (sum == originalNum) {
        cout << originalNum << " is a Strong number." << endl;
    } else {
        cout << originalNum << " is not a Strong number." << endl;
    }

    return 0;
}

