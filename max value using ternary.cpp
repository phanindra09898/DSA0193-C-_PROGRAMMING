#include <iostream>
using namespace std;

int main() {

    int a = 10, b = 20, c = 55;

    int largest = (a > b && a > c) ? a : ((b > c) ? b : c);

    cout << "The largest number is: " << largest << endl;

    return 0;
}

