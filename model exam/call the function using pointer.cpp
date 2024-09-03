#include <iostream>
using namespace std;

int multiply(int a) {
    return a * a;
}

int main() {
    int (*funcPtr)(int);

    funcPtr = &multiply;

    int result = (*funcPtr)(5);

    cout << "Result of 5 * 5 = " << result << endl;

    return 0;
}

