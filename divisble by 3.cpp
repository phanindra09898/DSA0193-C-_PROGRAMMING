#include <iostream>
using namespace std;

int main() {
    int number = 16;

    string result = (number % 3 == 0) ? "Divisible by 3" : "Not Divisible by 3";

    cout << "The number is: " << result << endl;

    return 0;
}

