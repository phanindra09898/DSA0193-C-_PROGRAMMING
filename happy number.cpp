#include <iostream>
using namespace std;

int main() {
    int num, sum, digit;
    
    cout << "Enter a number: ";
    cin >> num;

    int originalNum = num;

    while (true) {
        sum = 0;
        
        while (num > 0) {
            digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }

        num = sum;

        if (sum == 1) {
            cout << originalNum << " is a Happy number." << endl;
            break;
        }

        if (sum == 4) {
            cout << originalNum << " is not a Happy number." << endl;
            break;
        }
    }

    return 0;
}

