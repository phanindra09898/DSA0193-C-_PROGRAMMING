#include <iostream>
using namespace std;

int main() {
    int number = 123;  
    int sum = 0;

   
    while (number > 0) {
        sum += number % 10;  
        number /= 10;        
    }

    cout << "Sum of the digits is: " << sum << endl;

    return 0;
}

