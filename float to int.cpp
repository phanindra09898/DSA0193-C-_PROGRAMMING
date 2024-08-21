#include<iostream>
using namespace std;

int main() {
    float num;
    int rounded;

    cout << "Enter a floating-point number: ";
    cin >> num;

    if (num >= 0) {
        rounded = int(num + 0.5);  
    } else {
        rounded = int(num - 0.5);  
    }

    cout << "Rounded to the nearest integer: " << rounded << endl;

    return 0;
}

